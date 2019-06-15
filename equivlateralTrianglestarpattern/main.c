#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    printf("Hello world!\n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
            printf(" ");
        for(int j=0;j<n;j++)
        {
            if(i>=j)
                printf("*");
            //else
              //  printf("*");
        }
        for(int j=1;j<=i;j++)
        {

            printf("*");

        }
        printf("\n");
    }
    float a,b,c,d,s;

    int i=0;
    char str[4][100];
    //scanf("%[^\n]",str);
    while(i<4)
    {


          scanf("%s",str[i]);
          float x=(float)atol(str[i]);
            s+=x;
        printf("%f",x);
        i++;
    }
    printf("%s + %s + %s + %s = %.0f",str[0],str[1],str[2],str[3],s);
   // printf("%f + %f + %f + %f = %.0f",a,b,c,d,s);
    return 0;
}
