#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Hello Enter Expr!\n");
    char s[1000],t,t2;
    scanf("%[^\n]",s);
    t=s[0];
    t2=s[1];
    int l=strlen(s);
    FILE *fp;
    //fp=freopen("a.txt","w+",stdout);
    fp=fopen("a.txt","w");
    char a[]="*/";
    char b[]="+-";
    for(int k=0;k<2;k++){
        for(int i=0;i<l;i++)
        {
            if(a[k]==s[i])
            {
                fprintf(fp,"%c%c%c\n",s[i-1],s[i],s[i+1]);
            }
        }
    }
    //fprintf(fp,"#\n");
    for(int k=0;k<2;k++){
        for(int i=0;i<l;i++)
        {
            if(b[k]==s[i])
            {
                fprintf(fp,"%c%c%c\n",s[i-1],s[i],s[i+1]);
            }
        }
    }
    fclose(fp);
    FILE *fr;
    fr=freopen("a.txt","r",stdin);
    char mat[100][1000];
    int ind=0;
    while(scanf("%s",s)>0)
    {
         //printf("%s\n",s);
        strcpy(mat[ind++],s);
    }
    int i;
    for( i=0;i<ind;i++)
    {
        char first[100]="",second[100]="";
        for(int k=0;k<i;k++)
        {
            for(int j=0;mat[k][j];j++)
            {
                if(mat[k][j]==mat[i][0])
                {
                    first[0]='t';
                    first[1]=k+48+1;
                    first[2]='\0';
                    break;
                }
            }
        }

        for(int k=0;k<i;k++)
        {
            for(int j=0;mat[k][j];j++)
            {
                if(mat[k][j]==mat[i][2])
                {
                    second[0]='t';
                    second[1]=k+48+1;
                    second[2]='\0';
                    break;
                }
            }
        }
        //printf("%s%s\n",first,second);
        int n1=strlen(first);
        int n2=strlen(second);
        if(n1==0&&n2==0)
            printf("t%d=%s\n",i+1,mat[i]);
        else if(n1>0&&n2==0)
            printf("t%d=%s%c%c\n",i+1,first,mat[i][1],mat[i][2]);
        else if(n1==0&&n2>0)
            printf("t%d=%c%c%s\n",i+1,mat[i][0],mat[i][1],second);
        else
            printf("t%d=%s%c%s\n",i+1,first,mat[i][1],second);

    }
    if(t2=='=')
        printf("%c%ct%d",t,t2,i);


    return 0;
}
