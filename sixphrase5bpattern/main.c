// You are using GCC
#include<stdio.h>
int main()
{
    int n,ind;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a[n];
        ind=0;
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
            a[ind]=j;
            ind++;
        }
        for(int j=ind;j<n;j++)
        {
            printf(" ");
        }
        for(int j=n-1;j>=ind;j--)
        printf(" ");

        for(int j=ind-1;j>=0;j--)
        printf("%d",a[j]);

        printf("\n");
    }
}
