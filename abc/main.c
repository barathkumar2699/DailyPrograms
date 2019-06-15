#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,z,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            count=count+j-1;
            //printf("%d",z);
            if(j%2==1)
            {

                z=n*(j-1)+1+(i-1);

             }
             else{
                z=((j*n)-(i-1));
             }
            printf("%d ",z);
            //z++;

            //printf("%d ",count);
        }
        //printf("%d ",count);
        printf("\n");
    }
    return 0;
}
