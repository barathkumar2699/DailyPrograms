#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

/* Prototypes */
int isPrime(int input);
int nextPrimeNumber();

int main(void){

    nextPrimeNumber();

}

/* Function for determining the next prime number */
int nextPrimeNumber(){

    int inputNumber = 1;
    int nextPrimeNumber;

    while(inputNumber != 0){
        printf("\nPlease enter an integer: ");
        scanf("%d", &inputNumber);

        if(inputNumber<=0){
            printf("The number you have entered is zero or negative.\n");
            exit(0);
        }

        nextPrimeNumber = inputNumber + 1;

        /* if the number is even, make it odd (2 is special case) */
        if(nextPrimeNumber%2 == 0 && nextPrimeNumber != 2){
            nextPrimeNumber+=1;
        }

        /* while its not a prime number, check the next odd number */
        while(!isPrime(nextPrimeNumber)){
            nextPrimeNumber+=2;
        }

        printf("The prime number following %d is %d\n", inputNumber, nextPrimeNumber);
    }
    return 0;
}


/* Function that checks whether or not a given number is
 * a prime number or not.
 */
int isPrime(int input){
    int i;

    int prime = TRUE;

    if(input == 2){
        return TRUE;
    }

    if(input%2 == 0 || input <= 1){
        prime = FALSE;
    } else {
        for(i=3; i<=sqrt(input); i+=2){
            if(input%i == 0){
                prime = FALSE;
            }
        }
    }
    return prime;
}
