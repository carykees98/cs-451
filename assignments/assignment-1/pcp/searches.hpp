#pragma once

#include <cstdint>
#include <iostream>
#include <memory>
#include <queue>
#include <stack>

#include "Node.hpp"
#include "State.hpp"

namespace ckees::pcp
{
void bfs(const State& initial, const std::uint64_t maxDepth)
{
    std::cout << "Starting BFS" << std::endl << std::endl;

    std::queue<std::shared_ptr<Node>> fringe;
    fringe.emplace(std::make_shared<Node>(initial, 0));

    while (!fringe.empty())
    {
        auto currentNode = fringe.front();
        fringe.pop();

        if (currentNode->get_depth() > maxDepth)
        {
            continue;
        }

        auto currentState = currentNode->get_state();

        std::cout << currentState << std::endl;
        if (currentState.is_goal())
        {
            std::cout << "** Solution Found **" << std::endl;
            return;
        }

        const auto successorStates = currentState.find_successors();

        if (!successorStates.empty())
        {
            for (const auto& successor : successorStates)
            {
                fringe.emplace(
                    std::make_shared<Node>(successor,
                                           currentNode->get_depth() + 1));
            }
        }
    }

    std::cout << "** No Solution Found **" << std::endl << std::endl;
}

void dfs(State initial, std::uint64_t maxDepth)
{
    std::cout << "Starting DFS" << std::endl << std::endl;

    std::stack<std::shared_ptr<Node>> fringe;
    fringe.emplace(std::make_shared<Node>(initial, 0));

    while (!fringe.empty())
    {
        auto currentNode = fringe.top();
        fringe.pop();

        if (currentNode->get_depth() > maxDepth)
        {
            continue;
        }

        auto currentState = currentNode->get_state();

        std::cout << currentState << std::endl;
        if (currentState.is_goal())
        {
            std::cout << "** Solution Found **" << std::endl;
            return;
        }

        const auto successorStates = currentState.find_successors();

        if (!successorStates.empty())
        {
            for (const auto& successor : successorStates)
            {
                fringe.emplace(
                    std::make_shared<Node>(successor,
                                           currentNode->get_depth() + 1));
            }
        }
    }

    std::cout << "** No Solution Found **" << std::endl << std::endl;
}
} // namespace ckees::pcp

