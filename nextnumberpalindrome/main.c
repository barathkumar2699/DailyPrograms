// C++ program to find number is palindrome
// or not without using any extra space
#include <stdio.h>
#include<stdlib.h>
//using namespace std;
int isPalindrome(int);

int isPalindrome(int n)
{
    // Find the appropriate divisor
    // to extract the leading digit
    int divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;

    while (n != 0)
    {
        int leading = n / divisor;
        int trailing = n % 10;

        // If first and last digit
        // not same return false
        if (leading != trailing)
            return 0;

        // Removing the leading and trailing
        // digit from number
        n = (n % divisor) / 10;

        // Reducing divisor by a factor
        // of 2 as 2 digits are dropped
        divisor = divisor / 100;
    }
    return 1;
}

// Driver code
int main()
{
    int n;
    scanf("%d",&n);
    //isPalindrome(n) ? printf("Yes, it is Palindrome" ):printf("No, not Palindrome");
    while(1){
    if(isPalindrome(n)==0)
    {
        n++;
    }
    else{
        break;
    }
    }
    printf("%d",n);

    return 0;
}
