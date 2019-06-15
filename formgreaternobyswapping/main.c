#include<stdio.h>
#include <stdlib.h>

int main()
{
    char c[10000],d[100];
    int i,n,j=0,b[1000],temp=0,k=0;
    long int e=0;
    scanf("%s",c);
    int l=strlen(c)-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        //b[i]=b[i]-1;
    }
   /* for(i=0;i<l;i++)
    {
        d[0]=a[i];
        c[i]=atoi(d);
        e=e*10+c[i]*10;
        printf("%c %d %d\n",a[i],c[i],e);
    }
    e=e/10;*/
    i=0;
   while(c[i]!='\0')
    {
        if(i+1==b[j]&&c[i-1]<c[i]&&b[j]>1)
        {
            temp=c[i-1];
            c[i-1]=c[i];
            c[i]=temp;
            k=1;
        }
        else if(i+1==b[j]&&c[i]<c[i+1]&&b[j]<l-1)
        {
            temp=c[i];
            c[i]=c[i+1];
            c[i+1]=temp;
            k=1;
        }
       // else if(c[i]>c[{

        //}
        if(i+1==b[j])
        {
            j++;
            if(i+1>b[j])
            {
                i=b[j]-1;
            i--;
            }
            k=0;
        }
        i++;
    }
    //for(i=0;i<=l;i++)
        printf("%s",c);

}
