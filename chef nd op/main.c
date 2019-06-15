#include <stdio.h>
#include <stdlib.h>
struct chef
{
    char s1[1000],s2[1000];
    int n;
}obj[100];
int main()
{
   /* #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif*/

    char ch,s1[100],s2[100],a[]={'1','2','3'};
    int test,k=0;
    scanf("%d",&test);
    int i,j;
    while(k<test)
    {
        scanf("%d\n",&obj[k].n);
        for(i=0;i<obj[k].n;i++)
        {
            scanf("%c ",&obj[k].s1[i]);
        }
        obj[k].s1[i++]='\0';
        for(j=0;j<obj[k].n;j++)
        {
            scanf("%c ",&obj[k].s2[j]);
        }
        obj[k].s2[j++]='\0';
        k++;
    }
    k=0,i=0,j=0;
    while(k<test)
    {
       int min=obj[k].s2[0]-48,ind;
       for(i=0;i<obj[k].n;i++)
       {
           int v=obj[k].s2[i]-48;
           if(v>min)
           {
               min=v;
               ind=i;
           }
       }
       if(ind+2<obj[k].n)
       {
           for(i=ind,j=0;i<=ind+2,j<3;i++,j++)
           {
               obj[k].s1[i]=obj[k].s1[i]+a[j]-48;
               }
       }
       else{

       }
       int d;
       while(obj[k].s1[ind]!=obj[k].s2[ind])
       {
           d=obj[k].s2[ind]-obj[k].s1[ind];
           if(d==1)
           {
               for(i=ind,j=0;i<=ind+2,j<3;i++,j++)
               {
                   obj[k].s1[i]=obj[k].s1[i]+a[j]-48;
               }
           }
           else if(d==2)
           {
               for(i=ind-1,j=0;i<=ind+1,j<3;i++,j++)
               {
                   obj[k].s1[i]=obj[k].s1[i]+a[j]-48;
               }
           }
           else if(d>2)
           {
               for(i=ind-2,j=0;i<=ind,j<3;i++,j++)
               {
                   obj[k].s1[i]=obj[k].s1[i]+a[j]-48;
               }
           }
       }
    int f=0;
    for(i=0,j=0;i<obj[k].n,j<obj[k].n;i++,j++)
    {
        if(obj[k].s1[i]==obj[k].s2[j])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("TAK\n");
    }
    else{
        printf("NIE\n");
    }
        k++;
    }

    return 0;
}
