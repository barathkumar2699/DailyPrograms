#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,c=0,k=1;
char s[1000];
scanf("%s",s);
scanf("%d",&n);
char mat[1000][1000];
for(int i=0;s[i]!='\0';i+=n)
{
    for(int j=0,l=n-1;j<n,l>=0;j++,l--)
    {
        if(k==1)
        {
        mat[i][j]=s[c];
        c++;
        }
        else{
            mat[i][l]=s[c];
            c++;
        }
    }
    k*=-1;
}
int rw=0,cl=0;
for(int i=0;s[i]!='\0';i+=n)
{
    rw++;
    for(int j=0;j<n;j++)
    {
        printf("%c",mat[i][j]);
    }
    printf("\n");
}
for(int i=0;i<n;i++)
{
    for(int j=0;s[j]!='\0';j+=n)
    {
        printf("%c",mat[j][i]);
    }
}


}
