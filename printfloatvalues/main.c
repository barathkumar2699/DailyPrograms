#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[1000];
scanf("%[^\n]",s);
int n=strlen(s),c=0;
for(int i=0;i<n;i++)
{

    if(!isalpha(s[i])&&s[i]!=' ')
    {
        if(s[i]!='.')
        {
            c++;
        }

        else
        {
           // printf(" %d ",c);
            for(int k=i-c;k<n;k++)
            {
                if((s[k]==' ')||(isalpha(s[k])))
                {
                    printf("\n");
                    break;
                }
                printf("%c",s[k]);
            }
            c=0;
        }
        //printf("%c",s[i]);
    }
    else{
        c=0;
    }
}

}
