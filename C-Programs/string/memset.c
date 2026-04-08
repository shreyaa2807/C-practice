#include<stdio.h>
#include<string.h>

int main(){
    char str[]="hello";
    memset(str,'*',3);
    printf("%s",str);
    return 0;
}
