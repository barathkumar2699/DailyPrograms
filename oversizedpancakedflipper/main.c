#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct pancake{
    char s[1000];
    int n;
};
int main()
{
    printf("Hello world!\n");

    //pancake("---+-++-",3);
    //char s[]={"---+-++-"};
    //char s[]={"+++---+++---"};
    //char s[]={"+++++"};
    //char s[]={"-+-+-"};
    int no;
    scanf("%d",&no);
    struct pancake ob[no];
    for(int k=0;k<no;k++)
    {
        scanf("%s\n%d",ob[k].s,&ob[k].n);
   // }


    //printf("%s%d\n",s,l);
    //for(int k=0;k<no;k++){
            int l=strlen(ob[k].s);
    int count=0,f=0;
    for(int i=0;i<l;i++)
    {
        int c=0,c1=0,ind;
        if(ob[k].s[i]=='-')
        {
            ind=i;
            while(c<ob[k].n)
            {
                if(ob[k].s[ind]=='-')
                {
                    ob[k].s[ind]='+';
                    ind++;
                    c1++;
                }
                else if(ob[k].s[ind]=='+')
                {
                    ob[k].s[ind]='-';
                    ind++;
                    c1++;
                }
                c++;
            }
            if(c1!=ob[k].n)
            {
                printf("Case #%d:IMPOSSIBLE\n",k+1);
                f=1;
                break;
            }
            else{
                    f=0;
                count++;
            }
            //printf("%s\n",ob[k].s);
        }
    }
    if(f==0){
    printf("Case #%d:%d\n",k+1,count);
    }
    }
    //printf("%s",s);
    //pancake("+",1);
    getch();
    return 0;
}
