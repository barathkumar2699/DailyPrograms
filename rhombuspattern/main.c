#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n=5;
    int max=n+n;
    char a[n];
    if(n%2==0){
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1){
             if(i+j==n-1)
             {
                 printf("/");
                 a[j]='\\';
             }
             else if((i+j)%2!=0)
             {
                 int t=n-1;
                 if((i+j)%2!=0)
                 {
                     printf("/");
                     a[j]='\\';
                 }
             }
             else{
                printf("#");
                a[j]='#';
             }
            }else{
            printf("#");
            a[j]='#';
            }
        }
            for(int k=n-1;k>=0;k--)
            {
                printf("%c",a[k]);
            }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0&&(j>=i))
            {
                printf("\\");
                a[j]='/';
            }
            else{
            printf("#");
            a[j]='#';
            }
        }
        for(int k=n-1;k>=0;k--)
        {
            printf("%c",a[k]);
        }
        printf("\n");
    }
    }
    else{
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1){
             if(i+j==n-1)
             {
                 printf("/");
                 a[j]='\\';
             }
             else if((i+j)%2==0)
             {
                 int t=n-1;
                 if((i+j)%2==0)
                 {
                     printf("/");
                     a[j]='\\';
                 }
             }
             else{
                printf("#");
                a[j]='#';
             }
            }else{
            printf("#");
            a[j]='#';
            }
        }
            for(int k=n-1;k>=0;k--)
            {
                printf("%c",a[k]);
            }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0&&(j>=i))
            {
                printf("\\");
                a[j]='/';
            }
            else{
            printf("#");
            a[j]='#';
            }
        }
        for(int k=n-1;k>=0;k--)
        {
            printf("%c",a[k]);
        }
        printf("\n");
    }
    }
    return 0;
}
