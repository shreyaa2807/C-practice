#include<stdio.h>

int main(){
    int n;
    printf("enter the age: ");
    scanf("%d",&n);
    if(n>=18){
        printf("Eligible to vote");

    }
    else{
        printf("not eligible to vote");
    }
    return 0;
}