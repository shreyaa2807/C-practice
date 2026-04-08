#include<stdio.h>

int main(){
    int n, lastdigit,rev=0, temp;
    printf("enter a number: ");
    scanf("%d",&n);
    temp= n;
    while(temp>0){
        lastdigit= temp%10;
        rev= rev*10+ lastdigit;
        temp = temp/10;
    }
    if(rev==n){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
    return 0;
}