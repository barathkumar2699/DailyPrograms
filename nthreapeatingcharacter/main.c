#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[1000];
scanf("%[^\n]",s);
int c=0,x=0,n,f;
scanf("%d",&n);
int l=strlen(s);
while(s[c]!='\0'){
    if(s[c]!='*')
    {
    for(int i=c+1;i<l;i++){
        if(s[c]==s[i]){
                for(int j=i;j<l;j++)
                {
                    if(s[j]==s[c])
                    {
                        s[j]='*';
                    }
                }
            x++;
            f=0;
            //printf("%c",s[c]);

            printf("%s\n",s);
            if(x==n){
                printf("%c",s[c]);
                exit(0);
            }
            //break;
        }

    }
    }
    c++;
}

if(x==0){
    printf("-1");
}
//printf("%d",x);
}
