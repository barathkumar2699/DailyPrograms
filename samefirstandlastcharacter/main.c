#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[100][1000];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    char ch1=tolower(s[0][0]);
    char ch2=tolower(s[0][strlen(s[0])-1]);
    int f=0;
    for(int i=0;i<n;i++)
    {
        s[i][0]=tolower(s[i][0]);
        s[i][strlen(s[i])-1]=tolower(s[i][strlen(s[i])-1]);
        if(ch1==s[i][0]&&ch2==s[i][strlen(s[i])-1])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }


}
