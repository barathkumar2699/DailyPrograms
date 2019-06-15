#include <stdio.h>
#include <stdlib.h>

int main()
{
 //   printf("Hello world!\n");
 FILE *fp;
 fp=freopen("input.txt","r",stdin);
 fp=freopen("output.txt","w",stdout);
 int t,cass=1;
 scanf("%d",&t);
 while(t--){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
            scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                long long int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    long int i,j,k,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(j==i){
                j++;
            }
            if(j>=n)
                break;
            for(k=j;k<n;k++)
            {
                while(k==i||k==j){
                    k++;
                }
            if(k>=n)
                break;

                if((a[i]==(a[j]*a[k])))
                {
                    count++;
                  //  printf("%d=%d*%d\n",a[i],a[j],a[k]);
                }

            }
        }
    }
    printf("Case #%ld: %d\n",cass,count);
    cass++;
 }
    return 0;
}
