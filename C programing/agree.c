#include <stdio.h>

int main()
{
    char a;
    printf("Enter yes(y) or no(n)");
    scanf("%c",&a);

    if(a == 'y'){
        printf("Agreed.\n");
    }
    else if(a == 'n'){
        printf("Not Agreed.\n");
    }
    else{
        printf("Incorect choice");
    }
}
