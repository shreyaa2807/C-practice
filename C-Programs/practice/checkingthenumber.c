#include<stdio.h>

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0 && n>0){
        printf("number is positive even");
    }
    else if(n%2!=0 && n>0){
        printf("number is positive odd");
    }
    
    else if(n==0){
        printf("number is zero");
    }
    else{
        printf("negative number");
    }
    return 0;
}