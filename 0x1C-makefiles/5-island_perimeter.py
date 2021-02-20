#!/usr/bin/python3
"""
island perimeter method
"""


def island_perimeter(grid):
    """calculates island perimeter"""
    perimeter = 0
    if grid:
        if len(grid) > 0:
            if all(type(element) == list for element in grid):
                rowlen = len(grid[0])
                if all(len(element) == rowlen for element in grid):
                    rowlen = rowlen - 1
                    for r in range(len(grid)):
                        for c in range(len(grid[r])):
                            if grid[r][c] == 1:
                                if r == 0 or grid[r - 1][c] == 0:
                                    perimeter += 1
                                if r == len(grid) - 1 or grid[r + 1][c] == 0:
                                    perimeter += 1
                                if c == 0 or grid[r][c-1] == 0:
                                    perimeter += 1
                                if c == len(grid[r]) -1 or grid[r][c+1] == 0:
                                    perimeter += 1
    return perimeter
