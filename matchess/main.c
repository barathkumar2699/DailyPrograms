#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char mat[1000][1000];
    //printf("%d %d %d\n",'B','W',n);
    for(int i=0;i<n;i++)
    {
        char ch[n];
        scanf("%s",ch);

        for(int j=0;j<n;j++)
        {

            //printf("%d%d%d ",i,j,ch[0]);
            //printf("%c ",ch[j]);
            //ch[j]=toupper(ch[j]);
            mat[i][j]=ch[j];
        }
    }
    int k=1,i,j,flag;
    char s=mat[0][0];
    if(s=='W')
    {
    for(i=0;i<n;i++)
    {

        char cha[n];
        for(j=0;j<n;j++)
        {
            cha[j]=mat[i][j];
            printf("%c",cha[j]);
            if(k==1&&mat[i][j]=='W')
            {
            printf("%c%d ",mat[i][j],k);
            flag=0;
            }
            else if(k==-1&&mat[i][j]=='B')
            {
                printf("%c%d ",mat[i][j],k);
                flag=0;
            }
            else
            {
                printf("Invalid");
                exit(0);
            }

            k*=-1;
        }
        if(j%2==0)
        {
            k*=-1;
        }

        printf("\n");
    }
}
else if(s=='B')
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(k==1&&mat[i][j]=='B')
            {
                printf("%c%d ",mat[i][j],k);
                flag=0;
            }
            else if(k==-1&&mat[i][j]=='W')
            {
                printf("%c%d ",mat[i][j],k);
                flag=0;
            }
            else{
                printf("Invalid");
                exit(0);
            }
            k*=-1;
        }
        if(j%2==0)
        {
            k*=-1;
        }
        if(flag==1)
        {
            break;
        }
        printf("\n");
    }
}

if(flag==0){
    printf("Valid");
}
return 0;
}
