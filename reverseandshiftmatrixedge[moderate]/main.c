#include<stdio.h>
#include <stdlib.h>
int rev(int n)
{
    int rev_no=0,arr[100],c=0;
    while(n>0)
    {
        int r=n%10;
       // c++;
       rev_no=rev_no*10+r;
        n=n/10;
    }
    for(int i=0;i<c;i++)
    {
    //    rev_no+=arr[i]*pow(10,i);
    }
    //printf("%d",rev_no);
    return rev_no;
}

int main()
{
    int r,c,mat[100][100];
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int a[1000],n=0;
    a[n]=mat[1][0];
    n++;
    for(int j=0;j<c;j++)
    {
        a[n]=mat[0][j];
        n++;
    }
    for(int i=1;i<r-1;i++)
    {
        a[n]=mat[i][c-1];
        n++;
    }
    for(int j=c-1;j>=0;j--)
    {
        a[n]=mat[r-1][j];
        n++;
    }
    for(int i=r-2;i>=2;i--)
    {
        a[n]=mat[i][0];
        n++;
    }

    for(int i=0;i<n;i++)
    {
        a[i]=rev(a[i]);
        printf("%d ",a[i]);
    }
    int k=0;
    for(int j=0;j<c;j++){
        mat[0][j]=a[k];
        k++;
    }
    for(int i=1;i<r-1;i++)
    {
        mat[i][c-1]=a[k];
        k++;
    }
    for(int j=c-1;j>=0;j--)
    {
        mat[r-1][j]=a[k];
        k++;
    }
    for(int i=r-2;i>=1;i--)
    {
        mat[i][0]=a[k];
        k++;
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }




}
/*

4 4
85 84 12 26
33 43 91 95
98 17 45 66
57 17 73 10
*/
