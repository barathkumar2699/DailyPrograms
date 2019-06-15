#include <stdio.h>
#define size 5
int s[10],top;
void push()
{
    if(top==size-1){
    printf("FULL");

    }
    printf("Enter elenment to insert");
    int n;
    scanf("%d",&n);
    s[++top]=n;

}
void pop()
{
    if(top==-1)
    printf("Empty");
    printf("Deleted element is %d",s[top]);
    top--;

}
void display()
{
    if(top==-1)
    printf("Stack emoty");
    for(int i=0;i<=top;i++)
    printf("%d ",s[i]);
}
int main() {
	//code
	int ch;
	 top=-1;
	while(1)
	{
	    printf("Choose 1.push 2.Pop 3.Desp 4.exit");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	        case 1:
	        push();
	        break;
	        case 2:
	        pop();
	        break;
	        case 3:
	        display();
	        break;
	        case 4:
	        return 0;
	        break;
	    }
	}
	return 0;
}
