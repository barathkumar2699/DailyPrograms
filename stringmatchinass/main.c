#include<stdio.h>
#include <stdlib.h>

void sort_string(char *s)
{
    int c, d = 0, length;
    char *pointer, *result, ch;

    length = strlen(s);

    result = (char*)malloc(length+1);

    pointer = s;

    for ( ch = 'a' ; ch <= 'z' ; ch++ )
    {
        for ( c = 0 ; c < length ; c++ )
        {
            if ( *pointer == ch )
            {
                *(result+d) = *pointer;
                d++;
            }
            pointer++;
        }
        pointer = s;
    }

    *(result+d) = '\0';

    strcpy(s, result);
    free(result);
}
int main()
{
char a[1000],b[1000],ch[10000];
int c=0;
scanf("%s%s",a,b);
for(int i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
{
    if(a[i]==b[j])
    {
        //printf("%c ",a[i]);
         ch[c]=a[i];
        c++;
    }
    if(a[i]==b[i] && a[i]==a[i+1])
    {
        i++;
    }
}
printf("%s",ch);
sort_string(ch);
printf("%s",ch);
ch[c]='\0';
//printf("%d%d",c,strlen(ch));
for(int i=0;i<c;i++)
{
    for(int j=i+1;j<c;j++)
    {
        if(a[i]<a[j])
        {
            char t;
            t=ch[i];
            ch[i]=ch[j];
            ch[j]=t;

        }
    }
}
int k=0;
while(ch[k]!='\0')
{
 //   printf("%c ",ch[k]);
    k++;
}
}
