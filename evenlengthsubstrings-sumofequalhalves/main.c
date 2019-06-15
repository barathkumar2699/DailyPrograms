// A simple C based program to find length of longest even length
// substring with same sum of digits in left and right
#include<stdio.h>
#include<string.h>

void findLength(char *str)
{
    if(str[0]=='1'&&str[1]=='0')
    {

        printf("-1");
       // exit(0);
    }
	int n = strlen(str);
	int maxlen =0; // Initialize result
        int ind1,ind2;
	// Choose starting point of every substring
	for (int i=0; i<n; i++)
	{
		// Choose ending point of even length substring
		for (int j =i+1; j<n; j += 2)
		{
			int length = j-i+1;//Find length of current substr

			// Calculate left & right sums for current substr
			int leftsum = 0, rightsum =0;
			for (int k =0; k<length/2; k++)
			{
			    leftsum += (str[i+k]-'0');
				rightsum += (str[i+k+length/2]-'0');
				//printf("%c%c %d:%d\n",str[i+k],str[i+k+length/2],leftsum,rightsum);
			}

			// Update result if needed
			if (leftsum == rightsum && maxlen < length)
            {

					maxlen = length;
					ind1=i;
					ind2=j;
                    //printf("%d\n",maxlen);
            }

		}
	}
	//return maxlen;
	//printf("%d %d",ind1,ind2);
	int f=0;
	for(int i=ind1;i<=ind2;i++)
    {
        f=1;
        printf("%c",str[i]);
    }
    if(f==0)
    {
        printf("-1");
    }
}

// Driver program to test above function
int main(void)
{
	//char str[] = "10";
	char str[100];

    scanf("%s",str);

	findLength(str);
	return 0;
}
