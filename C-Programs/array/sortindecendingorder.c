#include<stdio.h>

int main(){
    int i,j,arr[5],a;
    printf("enter 5 elements: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]<arr[j]){
                a= arr[i];
                arr[i] = arr[j];
                arr[j] =  a;
            }
        }
    }
    printf("array in decending order: ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}