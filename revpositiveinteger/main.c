#include<stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,k,c=0,a[100];
    scanf("%lld",&n);
    k=n;
    while(k>0)
    {
        a[c]=k%10;
        k/=10;
        c++;
    }

    for(int i=0;i<c;i++)
    {
        if(a[i]!=0)
        printf("%d",a[i]);
    }


}

