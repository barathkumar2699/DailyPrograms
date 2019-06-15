#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i+=2)
    {
       // printf("%d",a[i]);
       if(i+1<n){
       for(int j=i+1;j>=i;j--)
       {
           printf("%d ",a[j]);
       }
       }
       else
       {
           printf("%d",a[i]);
       }
    }


}
