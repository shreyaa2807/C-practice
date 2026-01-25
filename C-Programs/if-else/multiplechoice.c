#include<stdio.h>

int main(){
    int a,b,choice;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("enter a choice: ");
    scanf("%d",&choice);
    
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);

    if(choice==1){
        printf("Addition is %d", a+b);
    }
    else if(choice==2){
        printf("Subtraction is %d", a-b);
    }
    else if(choice==3){
        printf("Multiplication is %d", a*b);
    }
    else if(choice==4){
        printf("Division is %d", a/b);
    }
    else{
        printf("invalid choice");
    }

    return 0;
}