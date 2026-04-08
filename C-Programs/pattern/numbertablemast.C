#include<stdio.h>

int main(){
    int i,j,space;
    for(j=1;j<=4;j++){
            printf("%d",j);
    }
    for(j=4-1;j>=1;j--){
            printf("%d",j);
    }    
    printf("\n");
    for(i=4-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(space=1;space<=2*(4-i)-1;space++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}