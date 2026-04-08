#include<stdio.h>

int main(){
    int n,sum=0,x;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        x= n%10;
        if(x%2==0){
            sum=sum+x;
            
        }
        n=n/10;
    }
    printf("Sum of the digits are: %d",sum);
    return 0;
}