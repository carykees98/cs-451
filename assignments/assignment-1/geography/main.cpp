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
    ckees::geography::State initial1("",
                                     {
                                         "ABC",
                                         "CDE",
                                         "CFG",
                                         "EHE",
                                         "EIJ",
                                         "GHK",
                                         "GLC",
                                     },
                                     "ABC");
    ckees::geography::bfs(initial1, 10);
    ckees::geography::dfs(initial1, 10);

    ckees::geography::State initial2("",
                                     {
                                         "ABC",
                                         "CDE",
                                         "CFG",
                                         "EHI",
                                         "GJC",
                                         "GKG",
                                     },
                                     "ABC");
    ckees::geography::bfs(initial2, 10);
    ckees::geography::dfs(initial2, 10);

    return 0;
}
