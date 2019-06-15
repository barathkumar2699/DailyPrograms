#include<stdio.h>
#include <stdlib.h>
 char w1[1000],w2[1000];
int checkword1(char s[1000])
{
    int l1=strlen(w1);
    int l2=strlen(w2);
    int f=0;
    //printf("%d",l1);
   // printf("%s",s);
    int c=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(w1[c]==s[j])
            {
             f=1;
            }
            else
            {
                f=0;
                break;
            }
            c++;
        }

    if(f!=0)
    {
        //printf("%s",s);
        return 1;
    }
}
int checkword2(char s[1000])
{
    int l1=strlen(w1);
    int l2=strlen(w2);
    int c=0,f=0;
    for(int j=0;s[j]!='\0';j++)
    {
        if(w2[c]==s[j])
        {
            f=1;
        }
        else{
            f=0;
            break;
        }
        c++;
    }
    if(f!=0)
    {
        //printf("%s",s);
        return 1;
    }
}
int main()
{
    char str[1000];
    //scanf("%s",str);
    fgets(str,100,stdin);
    scanf("%s\n%s",w1,w2);
   // printf("%s",str);
   int c,count=0;
   int c1[100],c2[100],x=0,y=0;
    for(int i=0;i<strlen(str);i++)
    {
        c=0;
        char t[1000];
       for(int j=i;str[j]!=' ';j++)
       {

           if(str[j]=='\0'||str[j]=='\n')
           {
               break;

           }
           t[c]=str[j];
           c++;
       }
       t[c]='\0';
       count++;
       //printf("%s",t);
       if(checkword1(t)==1)
       {
           printf("%d ",count);
           c1[x]=count;
           x++;
       }
       if(checkword2(t)==1)
       {
           printf("%d ",count);
           c2[y]=count;
           y++;
       }
     //  printf("%s",t);

       //printf("%d",c);
       i=i+c;
      // printf("%c",str[i]);

    }
    //printf("%d ",count);
    //printf("%s%s",w1,w2);
    int arr[100],acount=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++){
        arr[acount]=abs(c1[i]-c2[j]);
        acount++;
        }
    }
    int min=arr[0];
    for(int i=1;i<acount;i++)
    {
        //printf("%d",arr[i]);
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    if(min>0)
    printf("%d",min);
    else
        printf("1");


}
