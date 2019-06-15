#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    int n;
    scanf("%s",s);
    scanf("%d",&n);
    int l=strlen(s);
    int i,ic=0,count=0,c=0;
    int t=0;
    //while(1){
    for(i=0;;i++)
    {
        if(i>l-1)
        {
            i=0;
        }
        if(isalpha(s[i]))
        {
            c++;
            if(c==n)
            {
                printf("%c",s[i]);
                s[i]='*';
                c=0;
                count++;
            }
        }



        if(count==l)
        {
           // break;
           exit(0);
        }



    }

    printf(" %s",s);


}
