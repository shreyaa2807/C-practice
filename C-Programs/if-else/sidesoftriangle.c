#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter frist number: ");
    scanf("%d", &a);
     printf("Enter frist number: ");
    scanf("%d", &b);
    printf("Enter frist number: ");
    scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b){
        printf("valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}