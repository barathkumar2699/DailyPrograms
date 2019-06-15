#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[1000][1000];//b("abcdefghijklmnopqrstuvwxyz");
int n;
scanf("%d\n",&n);
/*for(int i=0;i<n;i++)
scanf("%s",a[i]);
for(int i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
        t=a[i];
        a[i]=t;
        t
    }
}*/
int arr[n][26];
for(int i=0;i<n;i++)
{
    for(int j=0;j<26;j++)
    {
        arr[i][j]=0;
    }
}
printf("LOOSER");






for(int i=0;i<n;i++)
{
    char s[100];
    scanf("%s",s);
    for(int j=0;s[j]!='\0';j++){
    //scanf("%c",&a[i][j]);
    a[i][j]=s[j];
   // printf("%c",a[i][j]);
    arr[i][s[j]-'a']++;
    //printf("%d%d ",i,j);
      }
      printf("\n");
}
int count=0;
for(int j=0;j<26;j++)
{
    int f=0;
    for(int i=0;i<n;i++)
    {

       if(arr[i][j]>0)
       {
           //count++;
           f=1;
       }
       else{
           f=0;
           break;
       }
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    if(f==1)
    {
        count++;
    }
}
printf("\n%d",count);
//annonymous

}
