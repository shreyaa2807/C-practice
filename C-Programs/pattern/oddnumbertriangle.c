#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<=4;i++){
        
        for(j=1;j<=2*i-1;j++){
            if(j%2==1){
                printf("%d",j);
            }
            
        }
    printf("\n");
    }
    return 0;
}