#include<stdio.h>

int main(){
    int unit;
    float bill;
    printf("enter the unit");
    scanf("%d",&unit);
    if(unit>0 && unit<=100){
        
        printf("%d",bill*1);
    }
    else if(unit>101 && unit<=200){
        
        printf("%d",bill*2);
    }
    else if(bill>201 && bill<=300){
       
        printf("%d",unit*3);
    }
    else{
        printf("%d",unit*5);
    }
    return 0;
}