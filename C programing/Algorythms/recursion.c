#include <stdio.h>

void get_recursion(int num);

int main()
{
    int Num;

    printf("Enter number: ");
    scanf("%i",&Num);

    get_recursion(Num);
}


void get_recursion(int num)
{   
   if (num <= 0)
   {
    return;
   }
   
    
    get_recursion(num - 1);
    for(int i = 0; i < num ; i++)
    {
        printf("#");
    }
    printf("\n");
}