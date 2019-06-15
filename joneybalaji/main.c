#include<stdio.h>

#include <stdlib.h>


int main()

{

    int n;

    scanf("%d",&n);

    int a[n][n];

    char temp;

    for(int i=0;i<n;i++)

        for(int j=0;j<n;j++)

            scanf("%d%c",&a[i][j],&temp);

    int have=a[0][0];

    int i=0,j=0;

    while(i!=n-1 && j!=n-1)

    {

        int right=a[i][j+1];

        int down=a[i+1][j];
        if(i!=n-1&&j!=n-1){

        if(down<=right)

        {

            if(have<down)

                have=down;

            i++;

        }

        else

        {

            if(have<right)

                have=right;

            j++;

        }
    }
    else{
        if((i==n||i==n-1) && j!=n-1)

        {
            if(i==n){
            i--;}



            if(have<a[i][j]){
                have=a[i][j];
            }
                j++;

        }

        if((j==n||j==n-1) && i!=n-1)

        {
                if(j==n){
            j--;}

            //i++;

            if(have<a[i][j])
{
                have=a[i][j];}
                i++;

        }
    }
        printf("%d.",have);

    }

    printf("%d",have);

}
