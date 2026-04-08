#include<stdio.h>

int main(){
    int i,j,space,k;
    for(i=1;i<=4;i++){
        int a=i-1;
        for(space=1;space<=4-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}