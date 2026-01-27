#include<stdio.h>

int main(){
    int n,a;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter a choice");
    scanf("%d",&a);
    switch(a){
        case 1: if(n%2==0)
                    printf("it is an even number");
                else
                    printf("it is an odd number");
        break;
        case 2: printf("The square of a number is:%d",n*n);
        break;
        case 3: printf("The cube of the number is:%d",n*n*n);
        break;
        default: printf("wrong input");
    }
    return 0;
}