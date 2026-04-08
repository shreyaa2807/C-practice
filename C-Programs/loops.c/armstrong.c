#include<stdio.h>

int main(){
    int n,sum=0,digit,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit= temp%10;
        sum= sum+(digit*digit*digit);
        temp= temp/10;
    }
    if(sum==n){
        printf("it is a armstrong number");
    }
    else{
        printf("it is not a armstrong number");
    }
    return 0;
}