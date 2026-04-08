#include<stdio.h>

int main(){
    int arr[5],i;
    printf("enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("arrays in reverse order: ");
    for(i=4; i>=0;i--){
        printf("%d", arr[i]);
    }
}