#include<stdio.h>
#include<string.h>

int main(){
    char str[]="hello world";
    printf("%s",strstr(str,"world"));
    return 0;
}