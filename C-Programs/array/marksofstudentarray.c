#include<stdio.h>
int main(){
    int marks[5],i,sum=0;
    printf("Enter mark of 5 elements: \n");
    for(i=0;i<5;i++){
        scanf("%d", &marks[i]);
    }
    
    for(i=0;i<5;i++){
        sum=sum+marks[i];
    }
    printf("the total marks are %d ", sum);
    return 0;
}