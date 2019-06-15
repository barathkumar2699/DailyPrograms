#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
void token_sep(char str[10])
{
if(strcmp("int",str)==0||strcmp("float",str)==0||strcmp("char",str)==0||strcmp("double",str)==0)
printf("\n%s is a Datatype",str);
else if(strcmp("includestdioh",str)==0)
    printf("%s is preprocssor\n",str);
else if(strcmp("main",str)==0||strcmp("printf",str)==0||strcmp("scanf",str)==0)
printf("\n%s is an function",str);
else if (strcmp("for",str)==0||strcmp("while",str)==0||strcmp("do",str)==0)
printf("\n %s is an loop structure");
else
printf("\n %s is an identifier");
}
int main()
{
    printf("Hello world!\n");
    FILE *fp1,*fp2,*fp3;
    fp3=fopen("input.txt","r");
    fp1=fopen("tokens.txt","w");
    fp2=fopen("spl.txt","w");
    char c;
    printf("SPCL CHARACYTERS\n");
    while(fscanf(fp3,"%c",&c)>0)
    {
       if(isalpha(c)||isdigit(c)||c==' '||c=='\n')
       {
           fprintf(fp1,"%c",c);
       }
       else
       {

           //fprintf(fp2,"%c\n",c);
           printf("%c",c);
       }

    }
    printf("\n");
    fclose(fp1);
    //fclose(fp2);
    fclose(fp3);
    fp2=fopen("tokens.txt","r");
    char s[100];
    while(fscanf(fp2,"%s",s)>0)
    {

        token_sep(s);
    }
fclose(fp2);

    return 0;
}
