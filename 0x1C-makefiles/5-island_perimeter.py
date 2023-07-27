#!/usr/bin/python3
"""
island permiter finder
"""

def island_perimeter(grid):
    """defines premeter of island"""
    island=0
    adj = []
    for row in range(0, len(grid)):
        for col in range(0, len(grid[row])):
            if grid[row][col] == 1:
                adj.append((row, col));
                
    print(adj)
    return island


