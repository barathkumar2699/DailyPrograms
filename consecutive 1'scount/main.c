#include<stdio.h>
#include <stdlib.h>

int main()
{
int r,c;
scanf("%d %d",&r,&c);
int mat[100][100],i,j;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&mat[i][j]);
    }
}
int co=0;
for(i=0;i<c;i++){

    for(j=0;j<r;j++){

  // printf("%d",mat[j][i]);
  if(mat[j][i]==1){
            int f=0;
            for(int k=j+1;r;k++){

                if(mat[k][i]==1){
                    mat[k][i]=-1;
                    f=1;
                }
                else{
                    break;
                }
                //printf("%d",mat[k][i]);
            }
            if(f!=0){
                co++;
            }
       }
}
printf("\n");
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",mat[i][j]);
    }
    printf("\n");
}
printf("%d",co);

}
