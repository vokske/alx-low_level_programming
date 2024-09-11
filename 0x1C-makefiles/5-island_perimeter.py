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
                if j > 0: #check cell to the left
                    if grid[i][j-1] == 1:
                        perimeter -= 1
                if j < y - 1: #check cell to the right
                    if grid[i][j+1] == 1:
                        perimeter -= 1
                if i > 0: #check cell below
                    if grid[i-1][j]:
                        perimeter -= 1
                if i < x - 1: #check cell above
                    if grid[i+1][j]:
                        perimeter -= 1
    return perimeter
