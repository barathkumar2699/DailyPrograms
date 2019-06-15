#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    printf("Hello world!\n");
    char s[]={"aabbccaaccaabbc"};
    //char s[]={"abaccbcbcc"};
   // char s[]={"abcabc"};
    //swap(&s[0],&s[1]);
    printf("%s\n",s);
    int l=strlen(s),f=0;
    for(int j=l-1;j>=0;j--)
    {
        if(s[j]=='b'&&(s[j-1]=='a'||s[j-1]=='c'))
        {
            swap(&s[j],&s[j-1]);
            printf("%s\n",s);
            j=l-1;
            f=1;
        }
        else{
                if(f==1)
                 continue;
        }
    }
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]=='a'&&s[i-1]=='b')
        {
            swap(&s[i-1],&s[i]);
            i=l-1;
            printf("%s\n",s);
        }
    }
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]=='b'&&s[i-1]=='a')
        {
         //   swap(&s[i],&s[i-1]);
            //(&s[i],&s[i-1]);
        }
    }
    printf("%s",s);
    return 0;
}
