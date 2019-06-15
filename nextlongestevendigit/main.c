#include<stdio.h>
#include <stdlib.h>
void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    char s[1000],n1[100],n2[100];
    scanf("%s %s",n1,n2);
    //printf("%s",n1);
    int l1=strlen(n1);
    int l2=strlen(n2);

    for(int i=0;i<l1;i++)
    {
        s[i]=n1[i];
    }
    int c=0;
    for(int i=l1;;i++)
    {
        if(n2[c]=='\0')
        {
            s[i]='\0';
            break;
        }
        s[i]=n2[c];
        c++;
    }
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;j<strlen(s);j++)
        {
            if(s[i]<s[j])
            {
                swap(&s[i],&s[j]);
            }
        }
    }
    int even=0,n=strlen(s);
    char x;
    if((s[n-1]-48)%2==1||(s[n-1])-48==0)
    {

    for(int i=n-1;i>=0;i--)
    {
        if((s[i]-48)%2==0&&s[i]-48!=0)
        {
            printf("%c%d\n%s\n",s[i],i,s);

            even++;
            char x=s[i];
            int j;
            for(j=i+1;j<n;j++)
            {

                s[j-1]=s[j];
                printf("%s\n",s);
            }
            s[j-1]=x;

           // swap(&s[i],&s[n-1]);
            break;
        }
    }
    }
    else{
        even++;
    }
    printf("%d",even);
    printf("%s",s);


}
