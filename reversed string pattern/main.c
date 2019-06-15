#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int l=strlen(s),f=0;
    if(l%2!=0)
    f=1;
    int ctr=0;
    for(int i=0;i<(l/2)+f;i++)
    {
       // printf("%d",ctr);
        int k=ctr;
        for(int j=i;j>=0;j--)
        {
        //printf("c");
        ctr++;
        }
        int j;
        for(j=ctr-1;j>=k;j--)
        {
            if(j<l)
            printf("%c ",s[j]);
            else
            printf("* ");
        }
        if(ctr>=l)
            break;
        printf("\n");
    }


}
