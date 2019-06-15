#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(int j=0;j<n;j++)
                printf("*");
        }
        else{
            for(int j=0;j<n;j++)
            {
                if(i==j||j==0||j==n-1||i==(n-j-1))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
