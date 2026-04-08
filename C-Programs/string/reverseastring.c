#include<stdio.h>

int main(){
    int i,length=0;
    char str[100];
    printf("enter a string: ");
    scanf("%s",&str);
    while(str[length] !='\0'){
        length++;

    }
    for(i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}