# Freecell

The problem contains cards numbered 1 to `n`, one card for each number.
A state of the problem contains the following:

- A counter `n`.
- Several piles of cards, each pile contains 0 to `n` cards, with each card
  appearing exactly once.

The successor function will do one of the following things:

- Take the block on top of some pile, and place it on top of another pile, such
  that it is placed directly on a smaller numbered block.
- Take the block on top of some pile and place it on an empty pile.
- Take the block on top of some pile and throw it away, assuming that the number
  on the block matches the counter, then decrement the counter.

The problem is solved when the counter is 0, equivalently when there are no
blocks left.

Any valid state could be an initial configuration.

## Test Cases

### Case 1

The counter is 10.

The piles are:
    - `[]`
    - `[]`
    - `[4, 5, 1, 2, 6, 7, 10, 9, 3, 8]`

**Note**: The piles are listed from top to bottom.

### Case 2

The counter is 12.

The piles are:
    - `[2, 11, 4]`
    - `[3, 12, 6, 1]`
    - `[7, 8, 9]`
    - `[10, 5]`

**Note**: The piles are listed from top to bottom.
