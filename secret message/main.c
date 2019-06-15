#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int k=n,c=0,a[1000];
while(k>0)
{
    k=k/10;
    c++;
}
for(int i=c-1;i>=0;i--)
{
    a[i]=n%10;
    n=n/10;
}
int f=0,count=0;

    for(int j=0;j<c;j++)
    {
        if(a[j]!=0)
        {
            f=1;
        }
        else
        {
            f=0;
        }
        if((j+1)<c)
            {
        int val=((a[j]*10)+a[j+1]);
        if(val>0&&val<=26)
        {
            count++;
        //printf("%d ",val);
        }
            }
    }
    for(int j=c-1;j>=0;j--)
    {
        int val=(a[j-1]*10)+a[j];
            if(val>=1&&val<=26)
            {
                printf("%d ",val);
                j--;
            }
            if(j==0)
            {
                printf("%d",a[j]);
            }

    }
    if(f!=0)
    {
        count++;
        printf("%d",count);
    }
    else{
        printf("0");
        exit(0);
    }


//printf("%d",count);

//printf("%d",'A');

}
