#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getcharval( char *s, int idx)
{

    if (idx < strlen(s))

        return s[strlen(s) - idx - 1] - 48;

    return 0;

}


char* add(char a[],char b[])
{

    //char a[]="463";char b[]="7893";

    char answer[256];

    int i, wa=strlen(a), wb=strlen(b), width, sum, carry;

    width = wa > wb ? wa : wb;

   for(i=0; i<width; i++)
    {

        char ca = getcharval(a, i);

        char cb = getcharval(b, i);

        sum = ca + cb + carry;

        carry = 0;

        if(sum > 9)
	{

            carry = 1;

             sum-=10;

        }

        answer[i] = sum+48;

    }

    if(carry) answer[i++] = carry+48;

    answer[i]= 0;

    for (i = 0; i < strlen(answer) / 2; i++)
    {

        char t = answer[i];

        answer[i] = answer[strlen(answer) - i - 1];

        answer[strlen(answer) - i - 1] = t;

    }

    //printf("%s\n", answer);

    return answer;

}

int main()
{
    char s1[]={"277282727278283838376628"};
    char s2[]={"28272622828726272826272727286"};
    //char s1[]={"876"};
    //char s2[]={"004"};
    char ans[200];
   // add(s2,s1);
    int t1[200];
    //rev(ans,t1);
    //strrev(ans);
    printf("%s\n",add(s1,s2));

 /*   int row,col;

    scanf("%d\n%d",&row,&col);

    char grid[row][col];
    char mat[102][200][101];
   /* for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          //  printf("%s ",mat[i][j]);
          mat[i][j]="";
        }//printf("\n");
        }*/

   /* int i,j;

    for(i=0;i<row;i++)
{
    grid[i][0]='1';
}

    for(j=0;j<col;j++)
{
    grid[0][j]='1';
}

    for(i=1;i<row;i++)
{
        for(j=1;j<col;j++)
{
            strcpy(mat[i][j],add(grid[i-1][j],grid[i][j-1]));
}
}
        for(i=1;i<row;i++){
        for(j=1;j<col;j++){
            printf("%s ",mat[i][j]);
        }printf("\n");
        }

    printf("%s",mat[row-1][col-1]);
*/
return 0;
}
