#include <stdio.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter the value of x1,x2,x3: ");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("enter the value of y1,y2,y3: ");
    scanf("%d %d %d",&y1,&y2,&y3);
    if(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0){
        printf("these points forms a straight line");
    }
    else{
        printf("these points doesn't forms a straight line");
    }
    return 0;

}