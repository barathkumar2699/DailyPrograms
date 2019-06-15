#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int num,index=0,count=1,subcount=0,inc;
    scanf("%d",&num);
    char word[num][99];
    while(scanf("%s",word[index])>0)
    {
        index++;
       // printf("%d",index); 123
    }
   // printf("%d",index); 3
    int number=index;
    //printf("%d",number); 3
    index=0;
    while(index<number)
    {
         //printf("%d",index); 0 1 2

        int len=strlen(word[index]);
       // printf("%d",len); 5 5 6
        for(inc=len-num;inc<len;inc++)
        {
            printf("%c",word[index][inc]);
        }
        printf(" ");
        index++;
        //printf("%d",index);  ple 1 2 3
        subcount++;
       // printf("%d",subcount); ple 1 2 3
        if(count==subcount)
        {
           // printf("%d",count); ple 1 2
            printf("\n");
            count++;
            //printf("%d",count); ple 2 3
            subcount=0;
        }
    }
    //printf("%d",subcount);
    if(subcount!=0)
    {
       // printf("%d",count); 3
        while(subcount<count)
        {
            //printf("%d",num); 3
            for(inc=1;inc<=num;inc++)
            {
                if(inc<=num)
                {
                    printf("*");
                   /*if(subcount='\0')
                   {
                        printf(" ");
                   }*/
                }
            }printf(" ");
            subcount++;
           // printf(" ");
        }
    }


}
