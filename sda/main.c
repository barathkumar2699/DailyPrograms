#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,l=2,b;
    scanf("%d",&n);
    int x;
    if(n%2==0)
    {
    x=2*n-3;
    }
    else{
            x=1;
        for(int i=1;i<n-1;i++)
        {
            x=x+2;
        }
    }
    b=x;
    printf("%d",x);
    for(int i=1;i<=n;i++)
    {
        int c=0;int c1=0;
        for(int j=0;j<i;j++)
        {
        int z;
        if(j==0)
        {
            z=i;
            printf("%d ",z);
        }
        else if(j%2==1)
                {
                    if(j+3==i){
                        b=x;
                    }


                    x=x-2;

                   c++;
        }

        else if(j%2==0)
        {
            z=z+l;

            printf("%dc%d ",z,c1);
            if(c1==0)
            {
                l=l+2;
            }
            c1++;

        }

        }

        b=x;
        printf("\n");
    }
    return 0;
}
