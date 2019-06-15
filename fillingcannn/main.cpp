#include<stdio.h>
#include <stdlib.h>
long int steps=0;
long int min(long int x,long int y)
{
    return x<y?x:y;
}
void fillup(int a,int b,int c,int d)
{
    int var=d;
    while(var<=a)
    {
        if(var==a)
        {
            steps=-1;
            return;
        }
        if(var==c)
        {
            return;
        }
        var=var+a+b;
        steps+=2;
    }
    d=var-a;
    if(c==d)
    {
        return;
    }
    steps+=2;
    fillup(a,b,c,d);
}
void filldown(int a,int b,int c,int d)
{
 int var=d;
 while(var>=b)
 {
     if(var==b)
     {
         steps=-1;
         return;
     }
     var=var-b;
     steps+=2;
     if(var==c)
     {
         return;
     }

 }
 d=var;
 if(c==d)
 {
     return;
 }
 steps+=2;
 filldown(a,b,c,a+d);
}

int main()
{
int i,j,k,t,n,a,b,c;
long int step1,step2;
steps=-1;
scanf("%d%d%d",&a,&b,&c);
if(b>a)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
if(c>a||c==0||a==0||b==0)
{
    steps=-1;
}else if(c==a||c==b)
{
    steps=1;
}
else
{
    steps=2;
    fillup(a,b,c,b);
    step1=steps;
    steps=0;
    filldown(a,b,c,a);
    step2=steps;
    steps=(min(step1,step2));
}
printf("%ld",steps);

}
