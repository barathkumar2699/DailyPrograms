#include <stdio.h>
#include <stdlib.h>

int main()
{
char s[1000];
scanf("%s",s);

int n=strlen(s);
for(int i=0,j=n-1;i<n,j>=0;i++,j--){


        if(s[i]==s[j]){
            printf("%c",s[i]);
        }

        if(i>j)
        {
            break;
        }


}
}
