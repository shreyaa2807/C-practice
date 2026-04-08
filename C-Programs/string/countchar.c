#include<stdio.h>

int main(){
    char str[100];
    int i=0,count = 0;

    printf("enter a string: ");
    scanf("%s",str);

    while(str[i]!='\0'){
        count ++;
        i++;
    }
    printf("length =%d",count);
    return 0;
}