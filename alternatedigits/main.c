#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i+=2)
    {
        for(int j=i+1;j>=i;j--)
        {
            if(j<strlen(s))
            printf("%c",s[j]);
        }
    }
    return 0;
}
