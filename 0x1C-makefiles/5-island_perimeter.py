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
                perimeter = perimeter + 4
                if grid[i][j+1] or grid[i+1][j] == 1:
                    perimeter = perimeter - 2
                if grid[i][j+1] == 1 and grid[i+1][j] == 1:
                    perimeter = perimeter -2
    return perimeter
