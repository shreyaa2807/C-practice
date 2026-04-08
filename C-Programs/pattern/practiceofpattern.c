#include<stdio.h>

int main(){
    int space,i,j;
    for(i=1;i<=4;i++){
        for(space=1;space<=4-i;space++){
            printf(" ");

        }
        for(j=1;j,j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}