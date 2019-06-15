#include <stdio.h>
#include <stdlib.h>
#define NOV 4
#define NOE 4
typedef struct edge{
    char ch1;
    char ch2;
    int wt;
}EDGE;
typedef struct node
{
    char ch;
    int wt;
    struct node* next;
}NODE;
typedef struct node2
{
    char ch;
    struct node2 *first;
    struct node*second;
}NODE2;
int mat[NOV][NOV];
NODE *header[NOV],*newNode,*tptr,*snn;
NODE2 *start,*fnn,*htptr;
EDGE a[NOE]={ {'A', 'B', 3 },{'A', 'C', 7 },{'C', 'D', 2 },{'A', 'D', 5 } };
void create(char ch1,char ch2,int data)
{
    newNode=(NODE*)malloc(sizeof(NODE));
    newNode->wt=data;
    newNode->ch=ch2;
    newNode->next=NULL;
    if(header[ch1-65]==NULL)
        header[ch1-65]=newNode;
    else{
        for(tptr=header[ch1-65];tptr->next!=NULL;tptr=tptr->next);
        tptr->next=newNode;
    }
}
void printnode()
{
    int ind=0;
    for(ind=0;ind<NOV;ind++,printf("\n"))
    {
        printf("%c\t",ind+65);
        for(tptr=header[ind];tptr!=NULL;tptr=tptr->next){
            printf("%c->",tptr->ch);
        }
    }
    printf("\n\n");
    for(htptr=start;htptr;htptr=htptr->first,printf("\n"))
    {
        printf("%c :",htptr->ch);
        for(tptr=htptr->second;tptr!=NULL;tptr=tptr->next){
            printf("%c->",tptr->ch);
        }
    }


}
void create2(char ch1,char ch2,int wt)
{
   fnn=(NODE2*)malloc(sizeof(NODE2));
   fnn->ch=ch1;
   fnn->first=NULL;
   fnn->second=NULL;
   if(start==NULL)
   {
       start=fnn;
       htptr=start;
   }
   else
   {
       for(htptr=start;htptr->first!=NULL&&htptr->ch!=ch1;htptr=htptr->first);
       if(htptr->ch!=fnn->ch && htptr->first==NULL)
        {
            htptr->first=fnn;
            htptr=htptr->first;
        }
   }
   snn=(NODE*)malloc(sizeof(NODE));
   snn->ch=ch2;
   snn->wt=wt;
   snn->next=NULL;
   tptr=htptr->second;
   if(tptr==NULL)
        htptr->second=snn;
    else{
        for(;tptr->next!=NULL;tptr=tptr->next);
        tptr->next=snn;
    }
}
int main()
{
    printf("Hello world!\n");
    int row,col;
    for(row=0;row<NOE;row++)
    {
    //    printf("%c %c %d\n",a[row].ch1,a[row].ch2,a[row].wt);
    mat[a[row].ch1-65][a[row].ch2-65]++;
    mat[a[row].ch2-65][a[row].ch1-65]++;
    create(a[row].ch1,a[row].ch2,a[row].wt);
    create(a[row].ch2,a[row].ch1,a[row].wt);
    create2(a[row].ch1,a[row].ch2,a[row].wt);
    create2(a[row].ch2,a[row].ch1,a[row].wt);
    }
    for(row=0;row<NOV;row++,printf("\n"))
    {
        for(col=0;col<NOV;col++)
            printf("%2d ",mat[row][col]);
    }
    printf("\n\n");
    printnode();

    return 0;
}
