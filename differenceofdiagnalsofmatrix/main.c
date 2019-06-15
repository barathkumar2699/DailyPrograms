#include<stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 scanf("%d",&n);
 int mat[n][n];
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0,a=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+mat[i][i];
        a=a+mat[i][n-i-1];

    }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {

            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    printf("%d %d\n",sum,a);
    sum=abs(sum);
    a=abs(a);
    int x=sum-a;
    printf("%d",abs(x));

}
