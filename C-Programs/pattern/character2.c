#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char word[]="UNIVERSITY";
    int length= strlen(word);
    for(i=2; i<=length;i=i+2){
        for (j=0;j<i;j++){
            printf("%c",word[j]);
        }
        printf("\n");
    }
    return 0;
}