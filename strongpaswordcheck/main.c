#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],arr[]={'#','!','_','$','@'};
    scanf("%s",s);
    int n=strlen(s);
    int scount=0,ncount=0,ucount,lcount,minlen=8,maxlen=25;
    for(int i=0;s[i]!='\0';i++)
    {
        int val=s[i];
       if(s[i]=='#'||s[i]=='!'||s[i]=='_'||s[i]=='$'||s[i]=='@')
       {
           scount++;
       }

        if(val>=65&&val<=90)
        {
            ucount++;
        }
        if(val>=97&&val<=122)
        {
            lcount++;
        }
        if(val-48>=0&&val-48<=57)
        {
            ncount++;
        }

    }
    printf("%d %d %d %d",scount,n,ucount,lcount);
    if(scount>=1&&ncount>=2&&(ucount>=1&&lcount>=1)&&(n>=minlen&&n<=maxlen))
    {
        printf("Valid");
    }
    else
    {
        printf("INVALID");
    }



}
