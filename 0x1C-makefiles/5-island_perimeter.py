#!/usr/bin/python3
""" island is home """


def island_perimeter(grid):
    """ grid calculator """
    perim = 0
    for row in range(len(grid)):
        for cell in range(len(grid[0])):
            if grid[row][cell] == 1:
                perim += 4
                if row > 0 and grid[row - 1][cell] == 1:
                    perim -= 2
                if cell > 0 and grid[row][cell - 1] == 1:
                    perim -= 2

    return perim
