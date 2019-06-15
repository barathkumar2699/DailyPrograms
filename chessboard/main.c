#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char mat[10000][10000];
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

    for(i=0;i<n;i++)
    {


        for(j=0;j<n;j++)
        {
            int val=mat[i][j];
            if(val==66||val==87)
            {

            if(mat[i][j]!=mat[i][j+1])
            {
             flag=0;
            }
            else
            {
                printf("Invalid");
                exit(0);
            }
            if(mat[i][j]!=mat[i+1][j]||mat[i-1][j]!=mat[i][j])
            {
                flag=0;
            }
            else{
                printf("Invalid");
                exit(0);
            }

            }
            else{
                printf("Invalid");
                exit(0);
            }
        }
    }

if(flag==0){
    printf("Valid");
}

}
