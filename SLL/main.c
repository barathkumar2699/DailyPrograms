#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//void insertnode(node **root,int value);
void insertnode(struct node **root,int value)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode)
    {
        newnode->data=value;
        newnode->next=NULL;
        if(*root==NULL)
        {
            *root=newnode;
        }
        else{
            struct node *temp=NULL;
            temp=*root;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }

    }
    else{
        printf("memory overflow try again");
    }
}
void showdata(struct node *temp)
{

    while(temp)
    {

        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void freedata(struct node **root)
{
    if(*root)
    {
        struct node *temp=*root;
        while(temp)
        {
            *root=temp->next;
            temp->next=NULL;
            free(temp);
            temp=*root;
        }
    }
    else{
        //empty list
    }
}
void rev(struct node **root)
{
        if(*root==NULL)
    {

    }
    else if((*root)->next!=NULL){
            struct node *temp=*root,*auxilary=*root,*store=NULL,*helper=NULL;
        while(temp!=NULL&&temp->next!=NULL&&temp->next->next!=NULL)
        {
            auxilary=auxilary->next;
            temp=temp->next->next;
        }
        temp=auxilary->next;
        auxilary->next=NULL;

        while(temp!=NULL)
        {
            helper=temp;
            temp=temp->next;
            helper->next=store;
            store=helper;
        }
        auxilary->next=store;
    }
}
int main()
{
    printf("Hello world!\n");
    struct node *root=NULL;
    insertnode(&root,1);
    insertnode(&root,2);
    insertnode(&root,3);
    insertnode(&root,4);
    insertnode(&root,5);
    showdata(root);
    rev(&root);
    showdata(root);
    freedata(&root);
    showdata(root);
    return 0;
}
