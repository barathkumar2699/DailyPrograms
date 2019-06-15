#include<stdio.h>
#include <stdlib.h>
void pattern(char s1[1000],char s2[1000]){
    int n1=strlen(s1);
    int n2=strlen(s2);
    //printf("%d",n2);

            for(int i=0;i<n1-1;i++)
            {
                printf("-");
            }
            printf("%c\n",s1[n1-1]);
        for(int i=n1-2,j=1;i>=0,j<n2;i--,j++){
            int k;
            if(i<0)
            {
                break;
            }
            for( k=0;k<i;k++){
                printf("-");
            }
            printf("%c",s1[i]);
           for(int k2=n1-1;k2>k;k2--)
           {
               printf("-");
           }
           for(int k3=1;k3<j;k3++)
           {
               printf("-");
           }
            printf("%c",s2[j]);
            printf("\n");
        }


}

int main()
{
 char str1[1000],str2[1000];
 scanf("%s",str1);
 scanf("%s",str2);
 int l1=strlen(str1);
 int l2=strlen(str2);
 if(str1[l1-1]==str2[0]||str2[0]==str1[l1-1])
 {
     pattern(str1,str2);
 }
 else if(str2[l2-1]==str1[0]||str1[0]==str2[l2-1]) {
    pattern(str2,str1);
 }
 else
 {
     printf("-1");
 }


}
