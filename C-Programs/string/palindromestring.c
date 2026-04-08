#include<stdio.h>

int main(){
    char str[100],rev[100];
    int i, length=0;

    printf("enter a string: ");
    scanf("%s",&str);
    while(str[length]!='\0')
    length++;

    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            printf("not palindrome");
            return 0;
        }
    } 
    printf("palindrome number");
    return 0;
}