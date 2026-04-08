#include<stdio.h>

int main(){
    char str[100];
    int i=0, words=1;
    printf("enter a string: ");
    scanf("%[^\n]",str);
    if(str[i]!=' '){
        words=1;

    }
    while(str[i]!='\0'){
        if(str[i]==' '&& str[i+1]!= ' '&& str[i+1]!='\0')
        words++;
        i++;
    }
    printf("number of words = %d",words);
    return 0;
}