#include <stdio.h>

int main(){
    int ram, shyam, ajay;
    printf("Enter age of Ram: ");
    scanf("%d",&ram);
    printf("Enter age of Shyam: ");
    scanf("%d",&shyam);
    printf("Enter age of Ajay: ");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest");
    }
    else if(shyam<ajay && shyam<ram){
         printf("Shyam is youngest");
    }
    else{
         printf("Ajay is youngest");
    }

    return 0;
}