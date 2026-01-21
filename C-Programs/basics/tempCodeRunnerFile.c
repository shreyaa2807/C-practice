#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d",a);
    printf("\nb=%d",b);
    return 0;
}