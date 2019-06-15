#include<stdio.h>
#include <stdlib.h>

int main()
{
long int n,m,ncount=0,mcount=0,narr[1000],marr[1000];
scanf("%ld\n%ld",&m,&n);
while(n>0)
{
    narr[ncount]=n%10;
    ncount++;
    n=n/10;
}
while(m>0)
{
    marr[mcount]=m%10;
    mcount++;
    m=m/10;
}
for(int i=0;i<ncount;i++)
{
}
int f,count=0;
for(int i=0;i<ncount;i++)
{
    f=0;

    for(int j=0;j<mcount;j++)
    {
        if(marr[j]!=-1){

        if(marr[j]==narr[i])
        {
            f=1;
            marr[j]=-1;
            break;
        }
        }

    }
    if(f!=0)
    {
        count++;
      //  printf("ys");
    }
    else{
        //count++;
        printf("NO");
        exit(0);
    }

  //  printf("%d",marr[i]);
}
//printf("%d%d",count,mcount);
if(count>0)
{
    printf("YEs");
}


}
