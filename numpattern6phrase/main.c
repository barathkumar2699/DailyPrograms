#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int ctr=0;
        if(i%2==0)
        {
            for(int j=2;ctr<i;j+=2)
            {
                printf("%d",j);
                ctr++;
            }
        }
        else{
            for(int j=1;ctr<i;j+=2)
            {
                printf("%d",j);
                ctr++;
            }
        }
        printf("\n");
    }
    return 0;
}
