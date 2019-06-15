#include <stdio.h>
#include <math.h>
void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
    return 1;
}
int main()
{
    char s[1000];
    scanf("%s",s);
    int l=strlen(s),f=0;
    int index;
    for(int i=0;i<strlen(s);i++)
    {
    //printf("%d ",s[i]);
    }
    int i,j;
    for(i=l-1;i>=0;i--)
    {
        //printf("%d",s[i]);
        if(s[i]>s[i-1])
        {
            f=0;
            //printf("%d",i);
            index=i;
            /*char t=s[i-1];
            s[i-1]=s[l-1];
            s[l-1]=t;*/

            break;
        }




    }

            //swap(&s[i-1],&s[l-1]);
            int x = s[i-1], smallest = i;
    for (j = i+1; j < l; j++){
        if (s[j] > x && s[j] < s[smallest]){
            smallest = j;}}

            swap(&s[smallest], &s[i-1]);
    for(int i=index;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {

            if(s[i]>s[j])
            {
                swap(&s[i],&s[j]);
            }
        }
    }
    printf("%s",s);
return 0;
}
