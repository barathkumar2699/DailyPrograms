#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t)
	{
	    int n;
	    scanf("%d",&n);
	    int a[1000][128]={0};

	    for(int i=0;i<n;i++)
	    {
	        char s[200];
	        scanf("%s",s);
	        for(int j=0;s[j]!='\0';j++)
	        {
	            int t=(int)s[j];
	            a[i][t]=a[i][t]+1;
	        }
	  //      printf("%s.",s);
	    }
	    int count=0,c=0;
	    for(int i=0;i<128;i++)
        {
            c=0;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]>0)
                {
                    c=0;
                }
                else{
                    c=1;
                    break;
                }
            }
            if(c==0)
                count++;
        }
        printf("%d",count);
	    printf("\n");
	    t--;
	}
	return 0;
}
/*
2
3
abcaa
bcbd
bgc
3
quick
brown
fox

*/
