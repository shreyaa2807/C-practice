#include<stdio.h>

int main(){
    int arr[10],i,sumeven=0,sumodd=0;
    printf("enter 10 elements: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            sumeven= sumeven+arr[i];
            
        }
        else{
            sumodd= sumodd+arr[i];
        }
        
    }
    printf("sum of even numbers in array:%d ",sumeven);
    printf("sum of odd numbers in array:%d ",sumodd);
    
    return 0;
}