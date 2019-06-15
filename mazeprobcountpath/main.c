//#include<iostream>
#include<stdio.h>
//using namespace std;

// Returns count of possible paths to reach cell at row number m and column
// number n from the topmost leftmost cell (cell at 1, 1)
void numberOfPaths(int m, int n)
{
    // Create a 2D table to store results of subproblems
    unsigned count[m][n];

    // Count of paths to reach any cell in first column is 1
    for (int i = 0; i < m; i++)
        count[i][0] = 1;

    // Count of paths to reach any cell in first column is 1
    for (int j = 0; j < n; j++)
        count[0][j] = 1;

    // Calculate count of paths for other cells in bottom-up manner using
    // the recursive solution
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)

            // By uncommenting the last part the code calculatest he total
            // possible paths if the diagonal Movements are allowed
            count[i][j] = count[i-1][j] + count[i][j-1]; //+ count[i-1][j-1];

    }
    //return count[m-1][n-1];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%u ",count[i][j]);
        }
        printf("\n");
    }
}

// Driver program to test above functions
int main()
{
    //printf("%d", numberOfPaths(3, 3));
    //numberOfPaths(25,21);
    int r=25,c=21;
    unsigned long long int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0;i<c;i++)
    {
        mat[0][i]=1;
    }
    for(int j=0;j<r;j++)
    {
        mat[j][0]=1;
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            mat[i][j]=mat[i-1][j]+mat[i][j-1];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%llu ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
