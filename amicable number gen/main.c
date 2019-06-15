#include <stdio.h>

#if USE_LONG_TYPE
typedef unsigned long Number;
#define FMT "%lu"
#else
typedef unsigned int Number;
#define FMT "%u"
#endif

static const Number MAX_VALUE = 1000000;


Number sum_of_factors(Number n)
{
    Number sum = 1;
    Number i = 2;
    for (;  i < n/i;  ++i) {
        if (n/i*i == n) {
            sum += i + n/i;
        }
    }
    if (i*i == n)
        sum += i; /* add square root only once */
    return sum;
}

int main()
{
    //#pragma omp parallel for
    int a,b;
    scanf("%d%d",&a,&b);
    for (Number num1 = a;  num1 <= 10000;  ++num1) {
        Number num2 = sum_of_factors(num1);
        if (num2 > num1 && num1 == sum_of_factors(num2)) {
            printf(FMT "\t\t" FMT "", num1, num2);
        }
    }
}
