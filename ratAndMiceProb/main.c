#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int visited[SIZE][SIZE];
int isSafe(int mat[SIZE][SIZE], int visited[SIZE][SIZE], int x, int y)
{
	if (mat[x][y] == 0 || visited[x][y])
		return 0;

	return 1;
}
void printSol(int maze[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
{
    for(int j=0;j<SIZE;j++)
        {

            printf("%d",maze[i][j]);
        }
        printf("\n");
}
}
int findSol(int maze[SIZE][SIZE])
{

    int x,y;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(maze[i][j]==9)
             {
                 x=i;
                 y=j;
             }
            // visited[i][j]=-1;
        }
    }
solve(0,0,x,y,maze,visited);

for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            printf("%d ",visited[i][j]);
        }
        printf("\n");
    }
if(visited[x][y]==1)
    printf("1");
else
    printf("0");
//printSol(maze);
//printf("1");
//return 1;
}
int isValid(int x,int y,int maze[SIZE][SIZE])
{
    if(x>=0&&x<SIZE&&y>=0&&y<SIZE&&(maze[x][y]==1||maze[x][y]==9))
        return 1;
    return 0;
}
int solve(int i,int j,int x,int y,int maze[SIZE][SIZE],int visited[SIZE][SIZE])
{
    if(i==x&&i==y)
        return 1;
    visited[i][j]=1;
    if(isValid(i+1,j,maze)==1&&isSafe(maze,visited,i+1,j)==1)
    {
        solve(i+1,j,x,y,maze,visited);
        //return 1;
    }
    if(isValid(i,j+1,maze)&&isSafe(maze,visited,i,j+1))
    {
        solve(i,j+1,x,y,maze,visited);
        //return 1;
    }
    if(isValid(i-1,j,maze)&&isSafe(maze,visited,i-1,j))
    {
        solve(i-1,j,x,y,maze,visited);
      //  return 1;
    }
    if(isValid(i,j-1,maze)&&isSafe(maze,visited,i,j-1))
    {
        solve(i,j-1,x,y,maze,visited);
    //    return 1;
    }

    //visited[i][j]=0;
}
int main()
{
    printf("Hello world!\n");
    int maze[SIZE][SIZE] = {
    {1,0 ,1 ,1, 1, 0, 0, 1},
    {1, 0, 0, 0, 1, 1, 1, 1},
    {1 ,0 ,0 ,0 ,1 ,0 ,0 ,0},
    {1 ,0 ,1 ,0 ,9 ,0 ,1 ,1},
    {1 ,1 ,1 ,0 ,1 ,0 ,0 ,1},
    {1 ,0 ,1 ,0 ,1 ,1 ,0 ,1},
    {1 ,0 ,0 ,0 ,0 ,1 ,0 ,1},
    {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1}
};
int k=findSol(maze);
//if(k==0)
    //printf("0");
    return 0;
}
