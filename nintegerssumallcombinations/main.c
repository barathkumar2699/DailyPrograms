#include<stdio.h>
#include<string.h>
short int subset[999][999],cnt=0;
void print_subset_count(int a[],int i,int sum){
   // this funtion count the number of subset present
        if(sum==0 && i==0){
                cnt++;
                return;
        }
        if(sum!=0 && i==0 && subset[0][sum]){
                cnt++;
                return;
        }
        if(subset[i-1][sum]){
                print_subset_count(a,i-1,sum);
        }
        if(sum>=a[i] && subset[i-1][sum-a[i]]){
                print_subset_count(a,i-1,sum-a[i]);
        }
}
void build_table(int a[],int n,int sum){
        int i,j;
        memset(&subset,0,sizeof(n*(sum+1)));
        for(i=0;i<n;i++){
                subset[i][0]=1;
        }
        //check if a[0] is less than sum then set true for the choice
        if(a[0]<=sum)
                subset[0][a[0]]=1;
        /*
         * fill the table using the formula
         *
         * current =  above value (i-1)(j) (or) value (i-1)(j-a[i])
         *
         * value(i-1)(j-a[i]) if the sum can be formed using 0..j subset
         *
         * */
        for(i=1;i<n;i++){
                for(j=0;j<sum+1;j++){
                                subset[i][j]=subset[i-1][j]||subset[i-1][j-a[i]];
                }
        }
        //print the subset table
        for(i=0;i<n;i++){
                for(j=0;j<sum+1;j++){
                      //  printf("%d ",subset[i][j]);
                }
                //printf("n");
        }
        //important check whether the subset is present or not
        if(subset[n-1][sum]==0){
               // printf("there are no subsets %d %d",n-1,sum);
                return;
        }
        //cool we completed table then we need to find the subset
        //this is done using recursion procedure
        //traversing from subset[i-1][sum]
        // two ways we can get subset
        // a) including elements eg: sum=10 list=1,2,3 include 4
        // b) excluding elements eg: sum=10 list=1,2,4,5 exclude 2
        // let’s do it
        print_subset_count(a,n-1,sum);
}
int main(){
        //int a[]={73,50,90,41,81,31,7,16,27,95,58,72,92,3,30,13,2,36,68,59};
        //int n=20,sum=140;
        long int sum;
        int n,i;
        scanf("%ld",&sum);
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        build_table(a,n,sum);
        printf("%d",cnt);
        return 0;
}
