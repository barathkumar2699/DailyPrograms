#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n,i=0,a[1000];
        scanf("%d",&n);
        while(n>0)
        {
            a[i]=n%2;
            if(i%2==1)
            {
                a[i]=1;
            }
            printf("%d ",a[i]);
            i++;
            n=n/2;
        }
        printf("\n");
        int c=i-1;
        for(c;c>=0;c--)
        {
            printf("%d",a[c]);
        }
        int d=0,m=0;
        printf("\n");
        for(int j=0;j<i;j++)
        {

            d=(a[j]*pow(2,m))+d;
            printf("%d ",d);
            m++;
        }
        printf("\n%d",d);
}
