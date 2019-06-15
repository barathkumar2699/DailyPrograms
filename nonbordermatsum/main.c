#include<stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        mat[i][0]=0;
        mat[i][c-1]=0;
    }
    for(int i=0;i<c;i++)
    {
        mat[0][i]=0;
        mat[r-1][i]=0;
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",mat[i][j] );
            sum=sum+mat[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);


}
/*

5 6
93 60 84 26 22 95
99 96 86 90 34 0
0 83 63 10 74 75
36 35 98 4 22 18
20 8 27 94 64 30
*/
