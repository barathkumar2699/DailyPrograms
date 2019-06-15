#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,min,c=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    for(int i=2;i<=min;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {

            if(arr[j]%i==0)
            {
                c++;
            }

        }
        if(c==n)
        {
            count++;
           // printf("%d",count);

        }
    }
        printf("%d",count);
    return 0;
}
