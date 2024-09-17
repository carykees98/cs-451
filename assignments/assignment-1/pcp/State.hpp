/**
 * @file State.hpp
 * @author Cary Keesler (keeslecj@clarkson.edu)
 * @date 2024-09-12
 */

#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace ckees::pcp
{
class State;
} // namespace ckees::pcp

std::ostream& operator<<(std::ostream& out, const ckees::pcp::State& state);

namespace ckees::pcp
{

class State
{
  public:
    State(const std::pair<std::string, std::string>&              sequence,
          const std::vector<std::pair<std::string, std::string>>& dominoes,
          const std::pair<std::string, std::string>&              dominoToAdd)
        : m_Sequence(sequence),
          m_Dominoes(dominoes),
          m_LastAction(dominoToAdd)
    {
        m_Sequence.first  += dominoToAdd.first;
        m_Sequence.second += dominoToAdd.second;
    }

    /**
     * @brief Returns a vector of new states, one for each available domino
     *
     * @return std::vector<State>
     */
    auto find_successors() -> std::vector<State>
    {
        std::vector<State> toReturn;

        for (const auto& domino : m_Dominoes)
        {
            toReturn.emplace_back(m_Sequence, m_Dominoes, domino);
        }

        return toReturn;
    }

    /**
     * @brief Checks to see if the top is the same as the bottom
     *
     * @return true if they are the same
     * @return false if they aren't the same
     */
    auto is_goal() -> bool { return m_Sequence.first == m_Sequence.second; }

    friend std::ostream& ::operator<<(std::ostream & out,
                                      const ckees::pcp::State
                                      & state);

  private:
    std::pair<std::string, std::string>              m_Sequence;
    std::vector<std::pair<std::string, std::string>> m_Dominoes;
    std::pair<std::string, std::string>              m_LastAction;
};

} // namespace ckees::pcp

auto operator<<(std::ostream&            out,
                const ckees::pcp::State& state) -> std::ostream&
{
    out << "Top: " << state.m_Sequence.first << std::endl;
    out << "Bottom: " << state.m_Sequence.second << std::endl
        << "----------------------------------------------" << std::endl;

    return out;
}
