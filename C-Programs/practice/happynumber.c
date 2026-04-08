#include<stdio.h>

int main(){
    int n,x,a,sum;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>=10){
        sum = 0;
        while (n>0){
        x=n%10; //last digit
        a=x*x; //squaring of numbers
        sum= sum+a;
        n= n/10; 
        }
        n=sum;
    }
    if(n==1){
        printf("it is a happy number");
    }
    else{
        printf("it is not a happy number");
    }
    
    return 0;
}