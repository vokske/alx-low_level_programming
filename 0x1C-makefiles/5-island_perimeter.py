#!/usr/bin/python3
"""Module represents island_perimeter."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    x = len(grid)
    y = len(grid[0])
    perimeter = 0

    for i in range(x):
        for j in range(y):
            if grid[i][j] == 1:
                perimeter += 4
                # check cell to the left
                if j > 0:
                    if grid[i][j-1] == 1:
                        perimeter -= 1
                # check cell to the right
                if j < y - 1:
                    if grid[i][j+1] == 1:
                        perimeter -= 1
                # check cell below
                if i > 0:
                    if grid[i-1][j]:
                        perimeter -= 1
                # check cell above
                if i < x - 1:
                    if grid[i+1][j]:
                        perimeter -= 1
    return perimeter
