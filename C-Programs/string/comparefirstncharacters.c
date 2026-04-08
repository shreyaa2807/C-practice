#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="apple";
    char str2[]="application";
    if(strncmp(str1,str2,4)==0){
        printf("first 4 charcters are equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}