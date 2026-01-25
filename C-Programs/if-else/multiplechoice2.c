#include<stdio.h>

int main(){
    float a,b;
    int choice;
    printf("1.Area of rectangle\n");
    printf("2.Area of triangle\n");
    printf("3.Area of circle\n");
    printf("4.Area of square\n");
    printf("enter a choice: ");
    scanf("%d",&choice);
    
    printf("enter a number");
    scanf("%f",&a);
    printf("enter a number");
    scanf("%f",&b);

    if(choice==1){
        printf("Area of rectangle is %f", a*b);
    }
    else if(choice==2){
        printf("Area of triangle is %f", 0.5*a*b);
    }
    else if(choice==3){
        printf("Area of circle is %f", 3.14*a*a);
    }
    else if(choice==4){
        printf("Area of square is %f", b*b);
    }
    else{
        printf("invalid choice");
    }

    return 0;
}