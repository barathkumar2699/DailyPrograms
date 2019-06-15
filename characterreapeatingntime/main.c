#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int n,c=0,count=0;
    scanf("%d",&n);
    int l=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {
        c=0;
        for(int j=i+1;s[i]==s[j];j++)
        {
            c++;
        }
        //printf("%c%d",s[i],c);
        if(c+1>=n)
        {
            printf("%c%d",s[i],c);
         i=i+c;
        }


    }


}
