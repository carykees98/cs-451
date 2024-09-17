/**
 * @file State.hpp
 * @author Cary Keesler (keeslecj@clarkson.edu)
 * @date 2024-09-12
 */

#pragma once

#include <algorithm>
#include <string>
#include <vector>

namespace ckees::geography
{
class State;
} // namespace ckees::geography

auto operator<<(std::ostream&                  out,
                const ckees::geography::State& state) -> std::ostream&;

namespace ckees::geography
{
class State
{
  public:
    State(const std::string&              wordList,
          const std::vector<std::string>& remainingWords,
          const std::string&              wordToAdd)
        : m_WordList(wordList + wordToAdd),
          m_RemainingWords(remainingWords),
          m_LastAction(wordToAdd)
    {
        m_RemainingWords.erase(std::find(m_RemainingWords.begin(),
                                         m_RemainingWords.end(),
                                         wordToAdd));
    }

    /**
     * @brief Returns a vector of new states, one for each word who's first
     * letter matches the last letter of the word list
     *
     * @return std::vector<State>
     */
    auto find_successors() -> std::vector<State>
    {
        std::vector<State> toReturn = {};

        for (const auto& word : m_RemainingWords)
        {
            if (m_WordList.back() == word.front())
            {
                State successor(m_WordList, m_RemainingWords, word);
                toReturn.emplace_back(successor);
            }
        }

        return toReturn;
    }

    /**
     * @brief Checks to see if there are any words remaining
     *
     * @return true if there are not
     * @return false if there are
     */
    auto is_goal() -> bool { return m_RemainingWords.empty(); }

    friend auto ::operator<<(std::ostream & out,
                             const State
                             & state) -> std::ostream&;

  private:
    std::string              m_WordList;
    std::vector<std::string> m_RemainingWords;
    std::string              m_LastAction;
};

} // namespace ckees::geography

auto operator<<(std::ostream&                  out,
                const ckees::geography::State& state) -> std::ostream&
{
    out << "Current State" << std::endl
        << "Word List: " << state.m_WordList << std::endl
        << "Last Action: " << state.m_LastAction << std::endl
        << "Number of Words Remaining: " << state.m_RemainingWords.size()
        << std::endl
        << "----------------------------------------------" << std::endl;

    return out;
}
