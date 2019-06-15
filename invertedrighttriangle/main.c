#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            for(int j=0;j<n;j++)
                printf("*");
        }
        else{
            for(int j=0;j<n;j++)
            {
                if(j<i)
                {
                    printf(" ");
                }
                else{
                    if(j==i||j==n-1)
                        printf("*");
                    else
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
