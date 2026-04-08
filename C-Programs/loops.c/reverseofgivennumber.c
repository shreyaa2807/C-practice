#include<stdio.h>

int main(){
    int n,x,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        x=n%10;
        a=a+x;
        a=a*10;
        n=n/10;
    }
    a=a/10;
    printf("%d",a);
    return 0;
}