#include<stdio.h>

int main(){
    int arr[5],i,smallest;
    printf("enter the elements \n");
    for(i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    smallest= arr[0];
    for(i=1;i<5;i++){
        if(arr[i]<smallest){
          smallest= arr[i]; 
        }
    }
    printf("the smallest element is %d",smallest);
    
    return 0;
}