#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    int x,y;
    scanf("%s %d %d",s,&x,&y);
    int l=strlen(s);
    int i;
    //printf("%c",s[0]);
    for( i=x;;i++)
    {

        //printf("%c",s[i]);

       i=i%l;
       printf("%c",s[i]);
       if(i==y)
       {
           break;
       }
    }
//printf("%c",s[i]);

}
