#include<stdio.h>

int main(){
    int a,b;
    char choice;
    printf("+ = Addition\n");
    printf("- = Subtraction\n");
    printf("* = Multiplication\n");
    printf("/ = Division\n");
    printf("enter a choice: ");
    scanf("%c",&choice);
    
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);

    switch(choice){
        case '+': printf("Addition is %d", a+b);
        break;
        case '-': printf("Subtraction is %d", a-b);
        break;
        case '*': printf("Multiplication is %d", a*b);
        break;
        case '/': printf("Division is %d", a/b);
        break;
        default: printf("invalid choice");
    }

    return 0;
}