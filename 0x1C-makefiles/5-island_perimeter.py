#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list): List of list of integers.

    Grid specifics:
        0 -> represents a water zone.
        1 -> represents a land zone.
        One cell is a square with side length 1.
        cells are connected horizontally or vertically (not diagonally).
        It is rectangular and width and height should not exceed 100.
        Completely surrounded by water and there is one island (or nothing).
        The island doesn't have 'lakes'.

    Returns:
        Perimeter of the island described by grid.
    """
    perimeter = 0

    # Don't loop at first and last indexes as they are all zeros since the land
    # is an island.
    for i, vector in enumerate(grid[1:-1], start=1):
        for j, cell in enumerate(vector[1:-1], start=1):
            if cell:
                if grid[i - 1][j] == 0:  # Check above cell.
                    perimeter += 1
                if grid[i + 1][j] == 0:  # Check below cell.
                    perimeter += 1
                if vector[j + 1] == 0:  # Check right cell.
                    perimeter += 1
                if vector[j - 1] == 0:  # Check left cell.
                    perimeter += 1
    return perimeter
