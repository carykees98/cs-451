#pragma once

#include <cstdint>
#include <memory>

#include "State.hpp"

namespace ckees::geography
{
class Node
{
    State         m_State;
    std::uint64_t m_Depth;

  public:
    Node() = delete;

    Node(State state, std::uint64_t depth)
        : m_State(state),
          m_Depth(depth)
    {
    }

    State get_state() { return m_State; }

    std::uint64_t get_depth() { return m_Depth; }
};
} // namespace ckees::geography
