
#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Enter value of X: ");
    scanf("%d",&x);

    printf("Enter value of y: ");
    scanf("%d",&y);

    if(x < y){
        printf("X is less Than Y");
    }
    else if(x > y){
        printf("X is greater Than Y");
    }
    else if(x == y){
        printf("x is equal to y");
    }
    else{
        printf("There was an error please try again!!!!!");
    }
}