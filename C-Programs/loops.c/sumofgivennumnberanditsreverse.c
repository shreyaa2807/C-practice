#include<stdio.h>

int main(){
    int n,x,sum=0,a=0,temp;
    printf("Enter the given number: ");
    scanf("%d",&n);
    temp=n;

    while(n!=0){
        x=n%10;
        a=a*10+x;
        n=n/10;
    }
    printf("The reverse number is:%d\n",a);
    sum= temp+a;
    printf("The sum of reverse and given number is:%d",sum );
    return 0;
}