#!/usr/bin/python3

"""Perimeter of an island."""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island as described in grid.

    Args:
    grid (List[List[int]]): A list of lists of integers where:
        - 0 reps the water zone.
        - 1 reps a land zone.
        - One cell is a square with side length 1.
        - Grid cells are only connected horizontally/vartically.
        - Grid is rectangular, width and height don't exceed 100.
        - Grid is completly surrounded by water.

    Returns: THe perimeter of an island.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1
    return size * 4 - edges * 2
