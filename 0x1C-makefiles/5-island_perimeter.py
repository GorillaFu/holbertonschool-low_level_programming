#!/bin/usr/python3
"""
island perimeter method
"""


def island_perimeter(grid):
    """calculates island perimeter"""

    if grid:
        perimeter = 0
        for r in range(len(grid)):
            for c in range(len(grid[r])):
                if grid[r][c] == 1:
                    if grid[r - 1][c] == 0:
                        perimeter += 1
                    if grid[r + 1][c] == 0:
                        perimeter += 1
                    if grid[r][c-1] == 0:
                        perimeter += 1
                    if grid[r][c+1] == 0:
                        perimeter += 1
        return perimeter
