#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 300
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,k,l,c,d[max],j,f,i1,j1,i2,j2;
        char a[max][max];
        scanf("%d",&n);
        scanf("%d",&m);
        k=n+m-2;
        for(j=0;j<n;j++)
            scanf("%s",a[j]);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
            {
                if(a[i][j]=='1')
                {
                   i1=i;
                   j1=j;
                   for(l=0;l<n;l++)
                   {
                       for(f=0;f<m;f++)
                       {
                           if(a[l][f]=='1')
                           {
                               i2=abs(i1-l);
                               j2=abs(j1-f);
                               d[(i2+j2)]+=1;
                           }
                       }
                   }
                }
            }
        }
        for(i=1;i<=k;i++)
        {
            if(i==1)
            {
            printf("%d",d[i]/2);
            d[i]=0;
            }
            else
            {
            printf(" %d",d[i]/2);
            d[i]=0;
            }
        }
        printf("\n");
    }
}
