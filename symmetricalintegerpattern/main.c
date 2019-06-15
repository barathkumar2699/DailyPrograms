#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n=4;
    int a[n];
    int c=1;
    for(int i=0;i<5;i++)
    {
        a[i]=c;
        c++;
    }
    int r;
    c=n-1;
    printf("0\n");
    for(int i=0;i<n;i++)
    {
        r=n-i-1;
        c=n-1;
        for(r=n-i-1;r<=c;r++)
        {
            printf("%d",a[r]);
        }
        printf("0");
        r=n-i-1;
        c=n-1;
        for(c=n-1;c>=r;c--)
        {
            printf("%d",a[c]);
        }
        printf("\n");
    }
    return 0;
}
