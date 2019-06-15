#include <stdio.h>
#include <stdlib.h>
struct yogrut{
    int n,consume;
};
int main()
{
    //printf("Hello world!\n");
    freopen("a2.in","r",stdin);
    freopen("b.txt","w+",stdout);
    long int no;
    scanf("%ld",&no);
    for(int k=0;k<no;k++){
    int n,consume;
    scanf("%ld %ld",&n,&consume);
    long int a[1000];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(int m=0;m<n;m++)
    {
        for(int x=m+1;x<n;x++)
        {
            if(a[m]>a[x])
            {
               long int t=a[m];
                a[m]=a[x];
                a[x]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    {
       // printf("%ld ",a[i]);
    }
    int count=0;
    j=0;
    while(j<n)
    {
        int c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                count++;
                c++;
                a[i]=0;
                if(c==consume)
                {
                    break;
                }
            }
        }
            for(i=0;i<n;i++)
            {
                if(a[i]>0)
                {
                    a[i]--;
                }
            }


        j++;
    }
    printf("Case #%d: %d\n",k+1,count);
    }
    return 0;
}


