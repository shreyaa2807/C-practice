#include<stdio.h>

int main(){
    int i,j,space,a;
    for(i=1;i<=4;i++){
        for(space=1;space<=4-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            a=i+j;
            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
            
        }
        printf("\n");
    }
    return 0;
}