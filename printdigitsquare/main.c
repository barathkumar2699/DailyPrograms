#include<stdio.h>
#include <stdlib.h>

int main()
{

   /*long long int n,k,c=0,a[1000];
    scanf("%lld",&n);
    printf("%d\n",n);
    n=abs(n);
    k=n;
    while(k!=0)
    {

        a[c]=k%10;
        k=k/10;
        c++;
        if(c==1&&k==0)
        {
            a[c]=k;
            c++;
        }
        printf("%d ",k);
    }
    printf("\n");
    for(int i=c-1;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");

    for(int i=c-1;i>=0;i--)
    {
        a[i]=abs(a[i]);
        if(a[i]%2!=0){
        printf("-%lld",a[i]*a[i]);
        }
        else if(a[i]%2==0)
        {
            printf("%lld",a[i]*a[i]);
        }
    }*/
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!='-'){
        int val=s[i]-48;
        val=abs(val);
        if(val%2!=0)
        {
            printf("-%d",val*val);
        }
        else if(val%2==0)
        {
            printf("%d",val*val);
        }
        }
    }


}
