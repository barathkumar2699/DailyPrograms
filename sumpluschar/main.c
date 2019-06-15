#include<stdio.h>
#include <stdlib.h>

int main()
{
char arr[1000];
scanf("%s",arr);
//printf("%d",'z');
int sum=0;
for(int i=0;i<strlen(arr);i++){
    arr[i]=tolower(arr[i]);
    int val=arr[i];
    if(val> 47&&val<=57){
    //printf("%d",sum);
        val=val-48;
        sum=sum+val;
    }
}
int r;
    r=sum%26;
    printf("%d %d\n",sum,r);
for(int i=0;i<strlen(arr);i++){
        arr[i]=tolower(arr[i]);
    int val=arr[i];
     if(val>96&&val<123){
        if(val+r>=123){
                int x=val;
            val=96+((x+r)-122);
        printf("%c",val);
        continue;
            }
        val=val+r;
        printf("%c",val);

    }
   // printf("%c",arr[i]);
}
//printf("%d",sum);

}
