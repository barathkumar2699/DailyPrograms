#include<stdio.h>
#include <stdlib.h>
void isal(char s[]){
    int l=strlen(s);
    int f=0;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]=='9'){
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f!=0){
        printf("%s",s);
        exit(0);
    }
}
int main()
{
  char c[1000];
  char s[1000];
    int num;

  scanf("%d",&num);
  itoa(num,s,10);

  //fprintf(c,"%d",t);
 //char s[]={"479"};
  isal(s);
  strcpy(c,s);
  int l=strlen(s);
  if(l==1){
      printf("%s",s);
      exit(0);
  }
  for(int i=1;i<l;i++){
     c[i]='9';
  }
  c[0]=c[0]-1;
   int n,m,k;
   n=atoi(s);
   m=atoi(c);
   printf("%d %d\n",m,n);
   k=m;
   int sum1=0,sum2=0;
   while(n>0){
       sum1=sum1+n%10;
       n=n/10;
   }
   while(m>0){
       sum2=sum2+m%10;
       m=m/10;
   }
   if(sum2==sum1){
       printf("%s",s);
   }
   else{
   printf("%d",k);
   }


}
