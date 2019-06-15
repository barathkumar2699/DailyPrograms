#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NOV 9
#define NOE 14
struct edge
{
 char ch1;
 char ch2;
 int wt;
};

typedef struct node
{
    char ch;
    int wt;
    struct node *link;
}NODE;

typedef struct head
{
    struct head *next;
    struct node *start;
}HEAD;
typedef struct edge EDGE;
HEAD *hnode,*hstart,*hptr;
NODE *newnode,*tptr;
EDGE data[NOE]={{'B','G',1},{'C','D',2},{'A','C',3},{'B','E',3},{'F','G',4},
{'A','D',5},{'E','I',5}, {'H','I',6},{'D','G',6}, {'C','F',9},
{'A','B',9},{'G','I',10},{'F','H',12},{'G','E',15}
};
void initheader(){
    for(int i=0;i<NOV;i++){
    hnode=(HEAD*)malloc(sizeof(HEAD));
    hnode->next=NULL;
    hnode->start=NULL;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->ch=i+65;
    newnode->link=NULL;
    hnode->start=newnode;
    if(hstart==NULL)
        hstart=hnode;
    else
    {
        for(hptr=hstart;hptr->next;hptr=hptr->next);
        hptr->next=hnode;
    }
    }

}
void printnode()
{
    system("CLS");
    for(hptr=hstart;hptr;hptr=hptr->next,printf("\n"))
    {
        for(tptr=hptr->start;tptr;tptr=tptr->link)
        {
            printf("%c ",tptr->ch);
        }
    }
}
HEAD* findnode(char search)
{
    for(hptr=hstart;hptr;hptr=hptr->next)
    {
        for(tptr=hptr->start;tptr;tptr=tptr->link)
        {
            if(tptr->ch==search)
                return hptr;
        }
    }
    return NULL;
}
HEAD *header1,*header2;
void kruskal()
{
    for(int i=0;i<NOE;i++){

    header1=findnode(data[i].ch1);
    header2=findnode(data[i].ch2);
    if(header1!=header2){
    for(tptr=header1->start;tptr->link;tptr=tptr->link);
    tptr->link=header2->start;
    for(hptr=hstart;hptr->next!=header2&&hptr;hptr=hptr->next);
    hptr->next=header2->next;
    }
    else
    printf("SKIPP");

    printnode();
    getch();
    }

}
int main()
{

initheader();
    kruskal();

 getch();
 return 0 ;
}
