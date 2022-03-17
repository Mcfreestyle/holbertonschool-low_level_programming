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
	i = 0
	for row in grid:
		j = 0
		for col in row:
			sides = 4
			if col == 1:
				if row[j - 1] == 1:
					sides -= 1
				if row[j + 1] == 1:
					sides -= 1
				if grid[i - 1][j] == 1:
					sides -= 1
				if grid[i + 1][j] == 1:
					sides -= 1
				per += sides
				print(sides)
			j += 1
		i += 1
	return (per)
