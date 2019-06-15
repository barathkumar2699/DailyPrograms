#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int h1,h2,m1,m2,s1,s2,c=0;
    scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
    while(1)
    {
        c++;
        s1++;
        if(s1==60)
        {
            s1=0;
            m1++;
            if(m1==60)
            {
                h1++;
                if(h1==24)
                {
                    h1=0;
                }
            }
        }
        printf("%d ",s1);
        if(h1==h2&&s1==s2)
            break;
    }
    printf("%d",c);
    return 0;
}
