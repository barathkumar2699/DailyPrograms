#include<stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    int c;
    char s[1000],a[1000],ch;
    //scanf("%[^\n]",s);
    gets(s);
 //   printf("%s",s);
    int j=0;
    if(s[0]=='a'||s[0]=='A')
    {
        if(s[1]==' '||s[1]==','||s[1]=='.')
        {
            count++;
        }
    }
    if(s[0]=='a'||s[0]=='A')
    {
         if( s[1]=='n'||s[1]=='N')
        {
            if(s[2]=' '||s[2]==','||s[2]=='.')
            {
                count++;
            }
        }
    }

    if(s[0]=='t'||s[0]=='T')
    {
        if(s[1]=='h'||s[1]=='H')
        {
            if(s[2]=='e'||s[2]=='E')
            {
                if(s[3]==' '||s[3]==','||s[3]=='.'){
                count++;
                }
            }
        }
    }
    for(int i=1;s[i]!='\0';i++)
    {
        if(s[i-1]==' '||s[i-1]==','||s[i-1]=='.')
        {
        ch=s[i];
     if(ch=='a'||ch=='A')
     {
         if(s[i+1]==','||s[i+1]==' '||s[i+1]=='.')
         {
          //   printf("%d%c%c",i,s[i],s[i+1]);
             count++;
         }

     }
     if(ch=='a'||ch=='A')
     {
         if(s[i+1]=='n'||s[i+1]=='N')
         {
             if(s[i+2]==' '||s[i+2]==','||s[i+2]=='.')
             {
                // printf("%d%c%c%c",i,s[i],s[i+1],s[i+2]);
                 count++;
             }
         }
     }

    /*if(ch=='a'||ch=='A')
    {
        if(s[i+1]=='n'||s[i+1]=='N')
        {
            if(s[i+2]=='d'||s[i+2]=='D')
            {
                if(s[i+3]==' '||s[i+3]==','||s[i+3]=='.')
                {
                    printf("%d%c%c%c%c",i,s[i],s[i+1],s[i+2],s[i+3]);
                }
            }
        }
    }*/
    if(ch=='t'||ch=='T')
    {
        if(s[i+1]=='h'||s[i+1]=='H')
        {
            if(s[i+2]=='e'||s[i+2]=='E')
            {
                if(s[i+3]==' '||s[i+3]==','||s[i+3]=='.')
                {
                  //  printf("%d%c%c%c%c",i,s[i],s[i+1],s[i+2],s[i+3]);
                    count++;
                }

            }
        }
    }
    }
    }

printf("%d",count);
}
