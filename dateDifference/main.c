#include<stdio.h>
typedef struct DATE
{
    int dd;
    int mm;
    int yyyy;
}Date;
int getDD(Date gd)
{
    return gd.dd;
}
int getMM(Date gd)
{
    return gd.mm;
}
int getYY(Date gd)
{
    return gd.yyyy;
}
void setDD(Date *d , int gd)
{
     d->dd =gd ;
}
void setMM(Date *d , int gd)
{
     d->mm =gd ;
}
void setYY(Date *d , int gd)
{
     d->yyyy =gd ;
}
void setDate( Date *d , int dd , int mm , int yy)
{
  d->dd=dd;
   d->mm=mm;
   d->yyyy=yy;
}
// You are using GCC
#include<stdlib.h>
long difference_in_dates(Date a,Date b)
{
 int d1,d2,m1,m2,y1,y2;
 d1=getDD(a);
 d2=getDD(b);
 m1=getMM(a);
 m2=getMM(b);
 y1=getYY(a);
 y2=getYY(b);
 long int sum=0;
 int f=0;
	while(d1!=1){
	    d1++;
	    sum++;
	    if(m1%2!=0)
	    {
	        if(d1>=31)
	        d1=1;
	    }
	    else if(m1==2&&(y1%4==0||(y1%400==0&&y1%100!=0)))
	    {
	        if(d1>=29)
	        d1=1;
	    }
	    else if(m1==2)
	    {
	        if(d1>=28)
	        d1=1;
	    }
	    else
	    {
	        if(d1>=30)
	        d1=1;
	    }
	    f=1;
	}
	if(f==1)
	m1++;
	while(d2!=1){
	    d2--;
	    sum++;
	}
	sum++;
	printf("DAY\n");
//	printf("%d %d %d\n%d %d %d\n",d1,m1,y1,d2,m2,y2);
	//printf("%ld",sum);
	int leap=0,nonleap=0;
 for(int i=y1;i<y2-1;i++)
 {
     if(i%4==0||(i%400==0&&i%100!=0))
     {
         leap++;
     }
     else
     {
         nonleap++;
     }
     y1++;
 }
 //printf("YEAR%d %d\n",leap,nonleap);
 //printf("%d %d %d\n%d %d %d\n",d1,m1,y1,d2,m2,y2);
	//printf("%ld",sum);
 while(m1!=12)
 {
     if(m1%2!=0)
     {
         sum+=31;
     }
     else if(m1==2&&(y1%4==0||(y1%400==0&&y1%100!=0)))
     {
         sum+=29;
     }
     else if(m1==2)
     {
         sum+=28;
     }
     else
     {
         sum+=30;
     }
     m1++;
 }
 sum+=31;
 m1=1;
 y1++;
 while(m1!=m2)
 {
     if(m1%2!=0)
     {
         sum+=31;
     }
     else if(m1==2&&(y1%4==0||(y1%400==0&&y1%100!=0)))
     {
         sum+=29;
     }
     else if(m1==2)
     {
         sum+=28;
     }
     else
     {
         sum+=30;
     }
     m1++;
 }
 sum=sum+((leap*366)+(nonleap*365));
//	printf("%d %d %d\n%d %d %d\n",d1,m1,y1,d2,m2,y2);
	//printf("%ld",++sum);
	++sum;
	return sum;
}
int main()
{//6570//2196
 Date d1, d2;
 int d,m,y;
 scanf("%d %d %d",&d,&m,&y);
 setDate(&d1,d,m,y);
 scanf("%d %d %d",&d,&m,&y);
 setDate(&d2,d,m,y);
 printf("%ld",difference_in_dates(d1,d2));
 return 0;
}
/*
16 3 1994
23 4 2018

10 5 1994
2 4 2018

5 5 1991
5 4 1992
*/
