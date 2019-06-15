#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d\n",&n);
    char ch;
    int mat[100][100];
    for(i=0;i<n;i++)
    {
        int cco=1;
        for(j=0;j<n;j++)
        {
            scanf("%d%c",&mat[i][j],&ch);

        }
    }


    j=0;
    int arr[100],c=0,max=mat[0][0];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
         //  printf("%d",mat[i][j]);
           if(mat[i][j]>=max)
           {
               max=mat[i][j];
           }
       }
        break;
        //printf("\n");
    }
    for(i=1;i<n;i++)
    {
        if(mat[i][n-1]>max)
        {
            max=mat[i][n-1];
        }
     //   printf("%d",mat[i][n-1]);
    }

    //printf("%d",max);
    int max2=mat[0][0];
    for(int i=0;i<n;i++)
    {
       // printf("%d",mat[i][0]);
       if(mat[i][0]>max2)
       {
           max2=mat[i][0];
       }
    }
    for(j=1;j<n;j++)
    {
        //printf("%d",mat[n-1][j]);
        if(mat[n-1][j]>max2)
        {
            max2=mat[n-1][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    //printf("%d",max2);
    if(max<max2)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",max2);
    }
    //printf("%d",c);



}
