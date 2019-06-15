#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int r,c,e,sr,sc,dr,dc;
    scanf("%d %d %d %d %d %d %d\n",&r,&c,&e,&sr,&sc,&dr,&dc);
    int mat[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&mat[i][j]);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        //    printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    int i,j,k,l,row,col;
    for(i=sr-1,j=sc-1;;)
    {
        if((i+1==dr&&j+1==dc))
            break;
        int i1=i,j1=j;
                int top=mat[i1-1][j1];
                int down=mat[i1+1][j1];
               long int right=mat[i1][j1+1];
                if(j==0)
                {
                while(top==0)
                {
                    i1--;
                }
                while(down==0)
                {
                    i1++;
                }
                if(right!=100000||right==0||right>=99999)
                {
                while((right<=99999&&right>=-99999))
                {
                    j1++;
                    right=mat[i1][j1];
                    printf("%d ",right);

                }
                i=i1;
                j=j1-1;
                }
            }
            else
            {
             printf("%d %d %d ",top,down,right);
             break;
            }
            printf("%d %d%d\n",mat[i][j],i,j);
           // break;
    }
    return 0;
}

/*

8 8 250 7 1 1 7
-100000 -100000 -100000 -100000 -100000 -100000 0 -100000
-100000 0 -100000 0 -400 0 0 -100000
-100000 100 -300 0 -100000 -300 -100000 -100000
-100000 0 -100000 500 -100000 250 0 -100000
-100000 -200 -100000 -100000 -100000 -100000 -100 -100000
-100000 0 -100000 0 0 50 50 -100000
0 0 -100 0 -100000 50 -100000 -100000
-100000 -100000 -100000 -100000 -100000 -100000 -100000 -100000

*/
