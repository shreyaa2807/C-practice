#include<stdio.h>

int main(){
    int arr[3][3],i,j;
    printf("enter the elements: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("array elements are: ");
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
    return 0;
}