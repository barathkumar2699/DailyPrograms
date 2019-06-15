#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char s1[],char s2[])
{
    int n=strlen(s1);
    int c=n-1;
    int i;
    for(i=0;i<n;i++)
    {
        s2[i]=s1[c];
        c--;
    }
    s2[i]='\0';
}
void add(char s1[],char s2[],char sum[100])
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    int max;
    if(l1>l2)
    {
        max=l1;
    }else{
        max=l2;
    }
    //int val1=s1[0]-48;
    //int val2=s2[0]-48;
    //int val21=s1[1]-48;
    //int val22=s2[1]-48;

    //sum[max]='\0';
    int n;
   /* if((val1+val2)<=9&&(l1==1)&&(l2==1))
    {
        sum[0]=val1+val2+'0';
        sum[1]='\0';
        return 0;
    }

    /*else if((val1+val2)>9&&(l1==l2))
    {
        sum[max+1]='\0';
    n=max;
    }
    else
    {
        n=max-1;
        sum[max]='\0';
        //sum[n]=0;

    }*/
    //sum[max]='\0';
    //sum[max+1]='0';
    n=0;
    //printf("%d",'9');
    int c=0;
    for(int i=l1-1,j=l2-1;i>=0||j>=0;i--,j--)
    {
        int v1,v2,s;
        v1=s1[i];
        v2=s2[j];
        if(i<0)
        {
            v1=48;
        }
            v1=v1-'0';
        if(j<0)
        {
            v2=48;
        }
            v2=v2-'0';

        //printf("%d%d ",v1-'0',v2-'0');
       // printf("%dc:%d ",v1+v2,c);
        s=v1+v2+c;
        if(l1>=l2){
        if(i==0)
        {
            c=s/10;
            s=s%10;
            if(c>0){
            //printf("%d %d",s,c);
            sum[n++]=s+'0';
            sum[n++]=c+'0';
            c=0;
            //sum[max+1]='\0';
            }
            else
            {
              //  printf("%d ",s);
                sum[n++]=s+'0';
                c=0;
                //sum[max]='\0';

             }
            continue;
        }
        }
        else if(l1<l2)
        {
            if(j==0)
            {
                c=s/10;
                s=s%10;
                if(c>0){
                //printf("%d %d",s,c);
                sum[n++]=s+'0';
                sum[n++]=c+'0';
                c=0;
                //sum[max+1]='\0';
                }
                else{
                //    printf("%d ",s);
                        sum[n++]=s+'0';
                        c=0;
                       // sum[max]='\0';
                    }
                continue;
            }
        }
        if(s>9)
        {
            c=s/10;
            s=s%10;
        }
        else
        {
            c=0;
        }
       // printf("%d ",s);
        sum[n++]=s+'0';
    }
    sum[n++]='\0';
      //  printf("\n%s",sum);
}
int main()
{
    char mat[102][102][102];
    int r=2,c=100;
    //scanf("%d%d",&r,&c);
    for(int j=0;j<c;j++)
    {
        char s[2]={'1','\0'};
        for(int k=0;s[k]!='\0';k++)
        {
            mat[0][j][k]=s[k];
        }
    }
    for(int j=0;j<r;j++)
    {
        char s[2]={'1','\0'};
        for(int k=0;s[k]!='\0';k++)
        {
            mat[j][0][k]=s[k];
        }
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            char t[200],res[200];
            add(mat[i-1][j],mat[i][j-1],t);
            rev(t,res);
            int k;
            for( k=0;res[k]!='\0';k++)
            {
                mat[i][j][k]=res[k];
            }
            mat[i][j][k]='\0';
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%s ",mat[i][j]);
        }
        printf("\n");
    }
   /// printf("%s",mat[r-1][c-1]);
    return 0;
}
