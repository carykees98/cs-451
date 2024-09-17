# Parking Lot

You have an `n` by `n` grid.

There are several cars in the grid, each car occupies two or more contiguous
positions in the grid, either horizontally or vertically.

The first car is yours.

There is a specific position in the grid considered to be the goal.

On each step, you can move some car (either your car or one of the others)
forward one space or backward one space (but not sideways), as long as no other
car is there.

You have won the game when your car touches the finish position.

## Test Cases

### Case 1

The grid is 5x5.
Your car is at (1,2), (2,2).

The other cars are at
    - (4,5), (5,5)
    - (4,1), (4,2), (4,3)
    - (2,4), (2,5)

You want to get your car to position (5,2).

### Case 2

The grid is 5x5.
Your car is at (3,2), (3,3).

The other cars are at
    - (1,1), (1,2)
    - (1,4), (1,5)
    - (2,1), (3,1)
    - (1,3), (2,3)
    - (2,5), (3,5)
    - (4,5), (5,5)

You need to get your car to position (3,5).
