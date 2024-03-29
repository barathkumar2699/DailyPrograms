// A Backtracking program in C to solve Sudoku problem
#include <stdio.h>

// UNASSIGNED is used for empty cells in sudoku grid
#define UNASSIGNED 0

// N is used for the size of Sudoku grid. Size will be NxN
#define N 9
int c=0;
// This function finds an entry in grid that is still unassigned
int FindUnassignedLocation(int grid[N][N], int *row, int *col);

// Checks whether it will be legal to assign num to the given row, col
int isSafe(int grid[N][N], int row, int col, int num);

/* Takes a partially filled-in grid and attempts to assign values to
all unassigned locations in such a way to meet the requirements
for Sudoku solution (non-duplication across rows, columns, and boxes) */
int SolveSudoku(int grid[N][N])
{
	int row, col;

	// If there is no unassigned location, we are done
	if (!FindUnassignedLocation(grid, &row, &col))
	return 1; // success!

	// consider digits 1 to 9
	for (int num = 1; num <= 9; num++)
	{
		// if looks promising
		if (isSafe(grid, row, col, num))
		{
			// make tentative assignment
			grid[row][col] = num;
			c++;
			//getchar();
			//printGrid(grid);

			// return, if success, yay!
			if (SolveSudoku(grid))
				return 1;

			// failure, unmake & try again
			grid[row][col] = UNASSIGNED;
		}
	}
	return 0; // this triggers backtracking
}

/* Searches the grid to find an entry that is still unassigned. If
found, the reference parameters row, col will be set the location
that is unassigned, and 1 is returned. If no unassigned entries
remain, 0 is returned. */
int FindUnassignedLocation(int grid[N][N], int *row1, int *col1)
{
	for (int row = 0; row < N; row++){
		for (int col = 0; col < N; col++)
			if (grid[row][col] == UNASSIGNED)
            {

            *row1=row;
            *col1=col;
				return 1;
            }
	}
	return 0;
}

/* Returns a intean which indicates whether an assigned entry
in the specified row matches the given number. */
int UsedInRow(int grid[N][N], int row, int num)
{
	for (int col = 0; col < N; col++)
		if (grid[row][col] == num)
			return 1;
	return 0;
}

/* Returns a intean which indicates whether an assigned entry
in the specified column matches the given number. */
int UsedInCol(int grid[N][N], int col, int num)
{
	for (int row = 0; row < N; row++)
		if (grid[row][col] == num)
			return 1;
	return 0;
}

/* Returns a intean which indicates whether an assigned entry
within the specified 3x3 box matches the given number. */
int UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row+boxStartRow][col+boxStartCol] == num)
				return 1;
	return 0;
}

/* Returns a intean which indicates whether it will be legal to assign
num to the given row,col location. */
int isSafe(int grid[N][N], int row, int col, int num)
{
	/* Check if 'num' is not already placed in current row,
	current column and current 3x3 box */
	return !UsedInRow(grid, row, num) &&
		!UsedInCol(grid, col, num) &&
		!UsedInBox(grid, row - row%3 , col - col%3, num)&&
			grid[row][col]==UNASSIGNED;
}

/* A utility function to print grid */
void printGrid(int grid[N][N])
{
	for (int row = 0; row < N; row++)
	{
	for (int col = 0; col < N; col++)
			printf("%2d", grid[row][col]);
		printf("\n");
	}
}

/* Driver Program to test above functions */
int main()
{
	// 0 means unassigned cells
	int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
					{5, 2, 0, 0, 0, 0, 0, 0, 0},
					{0, 8, 7, 0, 0, 0, 0, 3, 1},
					{0, 0, 3, 0, 1, 0, 0, 8, 0},
					{9, 0, 0, 8, 6, 3, 0, 0, 5},
					{0, 5, 0, 0, 9, 0, 6, 0, 0},
					{1, 3, 0, 0, 0, 0, 2, 5, 0},
					{0, 0, 0, 0, 0, 0, 0, 7, 4},
					{0, 0, 5, 2, 0, 6, 3, 0, 0}};
	if (SolveSudoku(grid) == 1)
		printGrid(grid);
	else
		printf("No solution exists");
printf("coynt: %d",c);
	return 0;
}
