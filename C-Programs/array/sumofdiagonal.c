#include<stdio.h>

int main(){
    int i,j,arr[3][3],sum=0;
    printf("enter 9 elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("diagonals are: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
            printf("%d ",arr[i][j]);
            }
        }
    }
    printf("sum of diagonals are: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum+= arr[i][j];
                
            }
            
            
        }
        
    }
    printf("%d ",sum);
    return 0;
}