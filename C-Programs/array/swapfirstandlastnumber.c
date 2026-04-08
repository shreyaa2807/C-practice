#include<stdio.h>

int main(){
    int i,arr[5],temp;

    printf("enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;
    printf("after swapping first and last number: ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}