/**
 * @file main.cpp
 * @author Cary Keesler (keeslecj@clarkson.edu)
 * @date 2024-09-10
 */

#include "searches.hpp"
#include "State.hpp"
#include <iostream>

auto main() -> int
{
    ckees::pcp::State initial1(
        {
            "",
            "",
    },
        {
            { "MOM", "M" },
            { "O", "OMOMO" },
        },
        {
            "MOM",
            "M",
        });
    ckees::pcp::bfs(initial1, 10);
    ckees::pcp::dfs(initial1, 10);

    ckees::pcp::State initial2(
        {
            "",
            "",
    },
        {
            { "AA", "A" },
        },
        {
            "AA",
            "A",
        });
    ckees::pcp::bfs(initial2, 10);
    ckees::pcp::dfs(initial2, 10);

    return 0;
}
