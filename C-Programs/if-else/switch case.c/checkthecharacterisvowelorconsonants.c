#include<stdio.h>

int main(){
    char l;
    printf("enter a letter: ");
    scanf("%c",&l);
    switch(l){
        case 'a' :  printf("It is a vowel"); 
        break;
        case 'e' :  printf("It is a vowel"); 
        break;
        case 'i' :  printf("It is a vowel"); 
        break;
        case 'o' :  printf("It is a vowel"); 
        break;
        case 'u' :  printf("It is a vowel"); 
        break;
        case 'A' :  printf("It is a vowel"); 
        break;
        case 'E' :  printf("It is a vowel"); 
        break;
        case 'I' :  printf("It is a vowel"); 
        break;
        case 'O' :  printf("It is a vowel"); 
        break;
        case 'U' :  printf("It is a vowel"); 
        break;
    
        default: if((l>='a' && l<='z')|| (l>='A' && l<='Z'))
                    printf("it is a consonant");
                else
                    printf("it is not an alphabet");
            
        
    }
    return 0;
}