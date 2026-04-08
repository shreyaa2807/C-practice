#include<stdio.h>

int main(){
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("enter 9 numbers of matrix 1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the array element are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
     printf("enter 9 numbers of matix 2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("the array element are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("adding of two matrices:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]= a[i][j]+b[i][j];
        }
    }
    printf("the addition of matrices are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}