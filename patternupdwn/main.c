#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int r,c;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
            if(j%2==0)
            {
                int z=r*j+1+i;
                printf("%d ",z);
            }
            else if(j%2==1)
            {
                int z=((j+1)*r)-i;
                printf("%d ",z);
            }
        }
        printf("\n");
    }
    return 0;
}
