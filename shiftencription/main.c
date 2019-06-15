#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[1000];
scanf("%[^\n]",s);
//gets(s);
int x,y;
printf("%d",'z');
scanf("%d%d",&x,&y);
for(int i=0;i<strlen(s);i++)
{
    if(s[i]==' ')
    {
     printf(" ");
    }
    else
    {
    int val=s[i];
    if(val>=48&&val<=57)
    {
        val=val+y;
        if((val-48)>9)
        {
      //      printf("%d",val-48);
        }
    }
    //val=val-96;
    if((val-48)>=0&&(val-48)<=18)
    {
        printf("%d",val-48);
    }

    else
    {
        if(val+x<=122)
        {
    printf("%c",val+x);
        }
        else{
                int t=(val+x)-122;
            printf("%c",96+t);
        }
    }
    }

}
//printf("%d %d",'0',"1");
}
