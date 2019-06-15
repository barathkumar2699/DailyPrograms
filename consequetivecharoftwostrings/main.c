#include<stdio.h>
#include <stdlib.h>

int main()
{
char s1[1000],s2[1000];
scanf("%s\n%s",s1,s2);
int l1=strlen(s1);
int l2=strlen(s2);
int c=0;
for(int i=0;i<l1-1;i++)
{
    char ch1,ch2;
    int f1=0,f2=0;
    if(s1[i]!='*'){
            c=0;
     ch1=s1[i];
     ch2=s1[i+1];
    }
    else{
         ch1=s1[i-c];
         ch2=s1[i+1];
    }
    for(int j=0;j<l2;j++)
    {
        if(ch1==s2[j])
        {
            f1=1;
        }
        if(ch2==s2[j])
        {
            f2=1;
        }
        //printf("%c",s1[j]);
    }
    if(f1!=0&&f2!=0)
    {
        printf("%c %c ",ch1,ch2);
        s1[i+1]='*';
        c++;
    }
}
int i=0;
while(i<l1)
{
    if(isalpha(s1[i]))
printf("%c",s1[i]);
i++;
}

}
