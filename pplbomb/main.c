#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,count=0;
scanf("%d",&n);
char mat[1000][1000];
for(int i=0;i<n;i++)
{
    char ch[n];
    scanf("%s",ch);
    for(int j=0;j<n;j++)
    {
        mat[i][j]=ch[j];
    }
}
//printf("%d %d %d %d",'1','9','*','p');
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        char val=mat[i][j]-'0';
       int v=val;
       if(v<=9&&v>=1)
       {
           for(int a=i-v;a<=i+v;a++)
           {
               for(int b=j-v;b<=j+v;b++)
               {
                   if(a>=n||b>=n)
                   {
                       break;
                   }
                   mat[a][b]='*';
                  // printf("%c ",mat[a][b]);


               }
               //printf("\n");
           }


       }
      // printf("%c ",mat[i][j]);

    }
    //printf("\n");
}
printf("\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {

        printf("%c ",mat[i][j]);
       if(mat[i][j]=='P')
       {
      //     printf("%c ",mat[i][j]);
           count++;
       }
    }
    printf("\n");
}
printf("%d",count);

}
