#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int a[1000],b[1000];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    b[i]=a[i];
    printf("%d ",b[i]);
}
printf("\n");
for(int i=n-1;i>=0;i--)
{
    int cur=a[i];
    if(i==0)
    {
        printf("%d ",a[i+1]);
        if(a[i+1]%2==0&&a[i]%2==1)
        {

                b[i+1]=-1;

        }
        else{
            b[i]=-1;
        }
    }
    else if(i==n-1)
    {
        printf("%d",a[i-1]);
        if(a[i-1]%2==0)
        {
            if(a[i]%2==1)
            {
                b[i-1]=-1;
            }
        }
        else{
            b[i]=-1;
        }
    }
    else
    {
        if(a[i-1]%2==0&&a[i+1]%2==0)
        {
            if(a[i]%2==1)
            {
                b[i-1]=-1;
                b[i+1]=-1;
            }
        }
        else
        {
         b[i]=-1;
        }
    }
}
printf("\n");
for(int k=n-1;k>0;k--)
{
    //if(b[k]>0)
    printf("%d ",b[k]);
}


}
