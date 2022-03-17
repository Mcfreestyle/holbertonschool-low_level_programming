#!/usr/bin/python3
"""This module provides the `island_perimeter` function"""


def island_perimeter(grid):
    """Calculate the perimeter of the island described in grid
        Args:
            grid = list of lists of integers
        Return:
            per = perimeter of the island
    """
    per = 0
    for i, row in enumerate(grid):
        for j, col in enumerate(row):
            sides = 4
            if col == 1:
                if j == 0 or row[j - 1] == 1:
                    sides -= 1
                if j == len(row) or row[j + 1] == 1:
                    sides -= 1
                if i == 0 or grid[i - 1][j] == 1:
                    sides -= 1
                if i == len(grid) or grid[i + 1][j] == 1:
                    sides -= 1
                per += sides
    return (per)
