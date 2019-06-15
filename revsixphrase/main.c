#include <stdio.h>
#include <stdlib.h>
int rev(int n)
{
    int r=0,c=0,a[100];
    while(n!=0)
    {

        int x=n%10;
        r=(r*10)+x;
        n=n/10;

    }

    return r;
}
int main()
{
    printf("Hello world!\n");
    printf("%d",rev(1234));
    return 0;
}
