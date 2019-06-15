#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],max;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==r)
            {
                printf("* ");
            }
            else {
                for(int k=i;k<r;k++)
                {
                  max=a[k][j];
                  if(max<a[k+1][j]){
                    max=a[k+1][j];
                  }
                }
                printf("%d ",max);
            }
        }
        printf("\n");
    }


    return 0;

}
