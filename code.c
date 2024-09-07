N = 9

# Function to print the Sudoku grid
def printGrid(grid):
    for row in range(N):
        for col in range(N):
            print(f"{grid[row][col]:2d}", end=" ")
        print()

# Check if it is safe to place num in the given row, column
def isSafe(grid, row, col, num):
    # Check if the number is not repeated in the current row and column
    for x in range(N):
        if grid[row][x] == num or grid[x][col] == num:
            return False
    
    # Check if the number is not repeated in the current 3x3 subgrid
    startRow = row - row % 3
    startCol = col - col % 3
    for i in range(3):
        for j in range(3):
            if grid[i + startRow][j + startCol] == num:
                return False

    return True

# Function to solve the Sudoku puzzle using backtracking
def solveSudoku(grid, row=0, col=0):
    # If we have reached the last cell (N-1, N-1), return True
    if row == N - 1 and col == N:
        return True
    
    # Move to the next row if we have reached the last column
    if col == N:
        row += 1
        col = 0
    
    # Skip the filled cells
    if grid[row][col] != 0:
        return solveSudoku(grid, row, col + 1)
    
    # Try filling the current cell with numbers 1 to 9
    for num in range(1, 10):
        if isSafe(grid, row, col, num):
            grid[row][col] = num
            if solveSudoku(grid, row, col + 1):
                return True
            
            # If the number doesn't lead to a solution, backtrack
            grid[row][col] = 0
    
    return False

# Main function
if __name__ == "__main__":
    grid = [
        [5, 3, 0, 0, 7, 0, 0, 0, 0],
        [6, 0, 0, 1, 9, 5, 0, 0, 0],
        [0, 9, 8, 0, 0, 0, 0, 6, 0],
        [8, 0, 0, 0, 6, 0, 0, 0, 3],
        [4, 0, 0, 8, 0, 3, 0, 0, 1],
        [7, 0, 0, 0, 2, 0, 0, 0, 6],
        [0, 6, 0, 0, 0, 0, 2, 8, 0],
        [0, 0, 0, 4, 1, 9, 0, 0, 5],
        [0, 0, 0, 0, 8, 0, 0, 7, 9]
    ]

    if solveSudoku(grid):
        printGrid(grid)
    else:
        print("No solution exists")
