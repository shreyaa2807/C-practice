#include<stdio.h>

int main(){
    int i,ar[5],count=0;
    printf("enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++){
        if(ar[i]%3==0){
            count++;
        }
    }
    printf("number divisible by 3: %d ", count);
    return 0;

}