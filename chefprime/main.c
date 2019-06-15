#include <stdio.h>
#include <stdlib.h>
int distinct(int n)
{
    int flag=0;
    for(int i=2;i<=n/2;i++)
    {
       // int flag=0;
        if(n%i!=0)
        {
            flag=1;
        }
        else
        {
            flag=0;
            return 0;
        }
    }
    if(flag!=0)
    {
        return 1;
    }
}
int factor(int n,int a[],int c)
{
    //c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int k=distinct(i);
           // printf("%d %d:%d@",k,i,n);
            if(k==1)
            {
             //   printf("%d",i);
                a[c]=i;
                c++;
            }
        }
    }
    return c;

}
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int k=0;k<num;k++){
       // arr[k]=k;
        scanf("%d",&arr[k]);
    }
    for(int k=0;k<num;k++){
    int flag=0;
  //  printf("Hello world!\n");
   int n;
   if(arr[k]==2)
   {
       printf("NO\n");
       continue;
   }
   //scanf("%d",&n);
   n=arr[k];

   int a1,b1;
   if(n%2==0)
   {
       a1=n/2;
       b1=n/2;
   }
   else{
    a1=(n/2);
    b1=(n/2)+1;
   }
   //n%2==0?(a1=n/2,b1=n/2):(a1=n/2,b1=(n/2)+1);
   //printf("%d %d\n",a1,b1);
   while(a1>0&&b1<n){
        int a[1000],b[1000];
        int c1,c2,s1=1,s2=1;
  c1= factor(a1,a,0);
  c2=factor(b1,b,0);
  if(c1==2&&c2==2)
  {

      for(int i=0;i<c1;i++)
      {
          s1=s1*a[i];
         // printf("%d.",a[i]);
      }
      //printf("\n");
      for(int i=0;i<c2;i++)
      {
          s2=s2*b[i];
          //  printf("%d,",b[i]);
      }
  }
  //printf("%d",c);
   //for(int i=0;i<c;i++)
   // printf("%d ",a[i]);
   //distinct(15);
   if(s1==a1&&s2==b1)
   {
       flag=1;
       printf("YES\n");
       break;
   }
   a1--;
   b1++;
   }
   if(flag==0)
   {
       printf("NO\n");
   }
    }
    return 0;
}
