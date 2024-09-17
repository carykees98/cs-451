# Geography

You have a set of words.

A list of words is legal if the last letter of each word is the same as the
first letter of the following word.

The problem is to find a legal list of words using all the words exactly once.
Assume that initially the first word is there, and you just need to complete it.

## Definitions

- State: The list of words and the remaining free words.

- Initial State: The initial word.

- Goal Test: All words have been used.

- Successor Function: Append another word where the first letter of the new word
  matches the last character of the previous word.

## Test Cases

Each test case contains a list of available words and the starting word.

### Case 1

- ABC
- CDE
- CFG
- EHE
- EIJ
- GHK
- GLC

Initial word is ABC

### Case 2

- ABC
- CDE
- CFG
- EHI
- GJC
- GKG

Initial word is ABC

## Output

### Test 1

```text
Starting BFS

Current State
Word List: ABC
Last Action: ABC
Number of Words Remaining: 6
----------------------------------------------

Current State
Word List: ABCCDE
Last Action: CDE
Number of Words Remaining: 5
----------------------------------------------

Current State
Word List: ABCCFG
Last Action: CFG
Number of Words Remaining: 5
----------------------------------------------

Current State
Word List: ABCCDEEHE
Last Action: EHE
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCDEEIJ
Last Action: EIJ
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCFGGHK
Last Action: GHK
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCFGGLC
Last Action: GLC
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCDEEHEEIJ
Last Action: EIJ
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGLCCDE
Last Action: CDE
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGLCCDEEHE
Last Action: EHE
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGLCCDEEIJ
Last Action: EIJ
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGLCCDEEHEEIJ
Last Action: EIJ
Number of Words Remaining: 1
----------------------------------------------

** No Solution Found **

Starting DFS

Current State
Word List: ABC
Last Action: ABC
Number of Words Remaining: 6
----------------------------------------------

Current State
Word List: ABCCFG
Last Action: CFG
Number of Words Remaining: 5
----------------------------------------------

Current State
Word List: ABCCFGGLC
Last Action: GLC
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCFGGLCCDE
Last Action: CDE
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGLCCDEEIJ
Last Action: EIJ
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGLCCDEEHE
Last Action: EHE
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGLCCDEEHEEIJ
Last Action: EIJ
Number of Words Remaining: 1
----------------------------------------------

Current State
Word List: ABCCFGGHK
Last Action: GHK
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCDE
Last Action: CDE
Number of Words Remaining: 5
----------------------------------------------

Current State
Word List: ABCCDEEIJ
Last Action: EIJ
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCDEEHE
Last Action: EHE
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCDEEHEEIJ
Last Action: EIJ
Number of Words Remaining: 3
----------------------------------------------

** No Solution Found **
```

### Test 2

```text
Starting BFS

Current State
Word List: ABC
Last Action: ABC
Number of Words Remaining: 5
----------------------------------------------

Current State
Word List: ABCCDE
Last Action: CDE
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCFG
Last Action: CFG
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCDEEHI
Last Action: EHI
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGJC
Last Action: GJC
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGKG
Last Action: GKG
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGJCCDE
Last Action: CDE
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGKGGJC
Last Action: GJC
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGJCCDEEHI
Last Action: EHI
Number of Words Remaining: 1
----------------------------------------------

Current State
Word List: ABCCFGGKGGJCCDE
Last Action: CDE
Number of Words Remaining: 1
----------------------------------------------

Current State
Word List: ABCCFGGKGGJCCDEEHI
Last Action: EHI
Number of Words Remaining: 0
----------------------------------------------

** Solution Found **
Starting DFS

Current State
Word List: ABC
Last Action: ABC
Number of Words Remaining: 5
----------------------------------------------

Current State
Word List: ABCCFG
Last Action: CFG
Number of Words Remaining: 4
----------------------------------------------

Current State
Word List: ABCCFGGKG
Last Action: GKG
Number of Words Remaining: 3
----------------------------------------------

Current State
Word List: ABCCFGGKGGJC
Last Action: GJC
Number of Words Remaining: 2
----------------------------------------------

Current State
Word List: ABCCFGGKGGJCCDE
Last Action: CDE
Number of Words Remaining: 1
----------------------------------------------

Current State
Word List: ABCCFGGKGGJCCDEEHI
Last Action: EHI
Number of Words Remaining: 0
----------------------------------------------

** Solution Found **
```
