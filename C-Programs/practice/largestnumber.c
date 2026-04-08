#include<stdio.h>

int main(){
    int n,x,a=0,rev=0,b;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2!=0){
        printf("the number is odd %d",n);
    }
    else{
        while(n>0){
            x= n%10;
            if(x%2!=0){
                printf("the number is odd %d",n);
                break;
            }
            n=n/10;
        }
    
    }
    
        
    return 0;
}