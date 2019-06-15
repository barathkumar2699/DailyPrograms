#include<stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,k,l;
    scanf("%d %d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    k=r/2;
    if(r%2!=0)
    {
        k++;
    }
    l=c/2;
    if(c%2!=0)
    {
        l++;
    }
    int ind1,ind2;
    int f1=0,f2=0,flag=0;
    for( i=0,ind1=r-1;i<r/2,ind1>=k;i++,ind1--)
    {
        for( j=0,ind2=0;j<c,ind2<c;j++,ind2++)
        {
            printf("%d %d",mat[i][j],mat[ind1][ind2]);
            if(mat[i][j]==mat[ind1][ind2])
            {
                f1=1;
                flag=0;
            }
            else{
                    f1=0;
                flag=1;
                break;
            }
        }
            if(flag==1)
            {
                break;
            }

        printf("\n");
    }
    printf("\n");

    k=c/2;
    if(c%2!=0)
    {
        k++;
    }
    l=r/2;
    if(r%2!=0)
    {
        l++;
    }
    flag=0;
    for(i=0,ind1=c-1;i<c/2,ind1>=k;i++,ind1--)
    {
        for(j=0,ind2=0;j<r,ind2<r;j++,ind2++)
        {
            printf("%d %d",mat[j][i],mat[ind2][ind1]);
            if(mat[j][i]==mat[ind2][ind1])
            {
                f2=1;
                flag=0;
            }
            else{
                    f2=0;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
        printf("\n");
    }
    printf("\n");
    printf("%d %d",f1,f2);
    if(f1==1&&f2==1)
    {
        printf("S");
    }
    else if(f1==1&&f2==0)
    {
        printf("H");
    }
    else if(f1==0&&f2==1)
    {
        printf("V");
    }
    else {
        printf("-1");
    }


}
/*
2 3
1 0 1
1 0 1

4 4
1 0 1 0
0 1 0 1
1 0 1 0
0 1 0 1

4 4
1 0 0 1
0 0 0 0
1 1 1 1
1 1 1 1

4 4
1 0 1 0
0 0 1 1
0 0 1 1
1 0 1 0
*/
