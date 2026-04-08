#include<stdio.h>
#include<string.h>

int main(){
    char str[]="apple,banana,orange";

    printf("%s\n",strtok(str,","));
    printf("%s\n",strtok(NULL,","));
    printf("%s\n",strtok(NULL,","));
    return 0;
}