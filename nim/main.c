#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,count=1;
    scanf("%d%d%d",&a,&b,&c);
    int k=b+c;
    if(k>a)
    {
        k=k-a;
    }
    while(k!=b)
    {
        k=k+c;
        if(k>a)
        {
            k=k-a;
        }
        count++;
        if(k==b)
        {
            break;
        }


        printf("%d ",k);


    }
    printf("%d",count);
    return 0;
}
