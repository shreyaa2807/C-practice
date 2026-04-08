#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){//for numbers
            if(i%2==0){
                printf("%c", 'A'+j-1);
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;

}