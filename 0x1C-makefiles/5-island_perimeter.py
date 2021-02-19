#!/usr/bin/python3
"""
function that returns perimeter of island
"""


def island_perimeter(grid):
"""
traverses a nested list representing an island
calculates the perimeter of the coastline
"""
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
