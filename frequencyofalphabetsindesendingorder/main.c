#include<stdio.h>
#include <stdlib.h>
void des(int carr[1000],int val[1000],int n)
{
    for(int i=0;i<n;i++)
    {
        //printf("%c%d",carr[i]+97,val[i]);
        for(int j=i+1;j<n;j++)
        {
            if(val[i]<val[j])
            {
                int t1=carr[i];
                carr[i]=carr[j];
                carr[j]=t1;
                int t2=val[i];
                val[i]=val[j];
                val[j]=t2;
            }
        }
    }
    for(int i=0;i<n;i++)
    {

        printf("%c",carr[i]+97);

    }
}

int main()
{
char s[150];
scanf("%s",s);
int flag=0,a[26]={0};
int n=strlen(s);
for(int i=0;i<n;i++)
{
    a[s[i]-'a']++;


}
int cha[1000],count[1000],c=0;
for(int i=0;i<26;i++){
 //   printf("%d%d\n",a[i],i);
 if(a[i]>1)
 {
 //printf("%c",i+97);
 cha[c]=i;
 count[c]=a[i];
 c++;
 }
}
des(cha,count,c);
for(int i=0;i<26;i++){
    if(a[i]==1)
    {
    printf("%c",i+97);
    }
}






}
