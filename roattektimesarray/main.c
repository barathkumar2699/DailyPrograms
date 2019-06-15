#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,arr[1000];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int r;
scanf("%d",&r);
if(r>=n)
{
    r=r%n;
}
for(int i=n-r;i<n;i++)
{
    printf("%d ",arr[i]);
}
for(int i=0;i<n-r;i++)
{
    printf("%d ",arr[i]);
}


}
