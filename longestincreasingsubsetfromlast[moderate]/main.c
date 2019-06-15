#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[1000],start[100],end[100],count[100],c=1,l=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i-=c)
    {
        int j;
        c=1;
        for( j=i;((a[j-1]>a[j]));j--)
        {
            //printf("%d ",a[j]);
            c++;
        }
        if(j<0)
        {
            //j=0;
        }
        start[l]=i;
        end[l]=j;
        count[l]=c;
        l++;
        //printf("%d,%dc%d ",i,j,c);
    }
/*    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(count[i]<count[j])
            {
                int t=count[i];
                count[i]=count[j];
                count[j]=t;
             //   t=start[i];
               // start[i]=start[j];
                //start[j]=t;
               // t=end[i];
               // end[i]=end[j];
               // end[j]=t;
            }
        }
    }
    */
int max=count[0];
for(int i=0;i<l-1;i++)
{
    if(max<count[i])
    {
        max=count[i];
    }
    printf("%d ",count[i]);
}
    printf("\n");
    for(int i=0;i<l;i++)
    {
     //   printf("%d,%dc%d ",start[0],end[0],count[0]);
        break;

    }

    printf("\n");
    for(int i=n-1;i>=0;i-=c)
    {
        int j;
        c=1;
        for( j=i;((a[j-1]>a[j]));j--)
        {
            //printf("%d ",a[j]);
            c++;
        }
        if(c==max)
        {
            for(int k=i;k>=j;k--)
            {
                printf("%d ",a[k]);
            }
            break;

        }
        //printf("%d,%dc%d ",i,j,c);
    }


}
/*
8
2 18 18 11 6 17 11 4


5
5 4 2 2 1
*/
