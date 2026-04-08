#include<stdio.h>

int main(){
    int ar[5],i;
    printf("Enter array element");
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    printf("Array elements are");
    for(i=0;i<5;i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}