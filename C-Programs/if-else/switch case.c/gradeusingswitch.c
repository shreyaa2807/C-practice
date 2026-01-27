#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n/10){
        case 10:
        case 9:
        printf("A");
        break;
        case 8:
        case 7:
        printf("B");
        break;
        case 6:
        case 5: 
        printf("C");
        break;
        default: printf("fail");
    }
    return 0;
}