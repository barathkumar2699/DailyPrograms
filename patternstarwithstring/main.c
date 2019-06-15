#include <stdio.h>
#include<strings.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
   // char s[]={"killer"};
    char s[1000];
    scanf("%s",s);
    int f=0;
    int l=strlen(s);
    if(l%2==0)
    {
        f=1;
    }
    int m=l/2;
    int c1=l-1;
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(i<m){
                char t[1000];
                int temp=0;
            for(int j=0;j<m;j++)
            {
                if(i==j)
                {
                    printf("%c",s[c1]);
                    t[temp]=s[c1];
                    c1--;
                    temp++;
                }
                else{
                    printf("*");
                    t[j]='*';
                    temp++;
                }
            }
            printf("%c",s[c]);
            c++;
            for(int j=temp-1-f;j>=0;j--)
            {
                printf("%c",t[j]);
            }
            //printf("\n");
        }
        else if(i==m)
        {
            printf("%s",s);
            c1--;
            c++;
        }
        else
        {
            int k=(l%(i+1));
            char t[1000];
            int temp=0;
            for(int j=0;j<m;j++)
            {
               // printf("%d",k);
                if(k==j)
                {
                    printf("%c",s[c1]);
                    t[temp]=s[c1];
                    c1--;
                    temp++;
                }
                else
                {
                    printf("*");
                    t[temp]='*';
                    temp++;
                }
            }
            printf("%c",s[c]);
            c--;
            for(int j=temp-1-f;j>=0;j--)
            {
                printf("%c",t[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
