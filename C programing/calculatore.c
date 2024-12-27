#include <stdio.h>

int get_number1()
{
    int a;

    printf("Enter number: ");
    scanf("%d",&a);
}

int get_number2()
{
    int b;

    printf("Enter number: ");
    scanf("%d",&b);
}
int get_number3()
{
    char d;

    printf("Enter operator: ");
    scanf("%C",&d);
}

int main()
{
    int a = get_number1();
    int b = get_number2();
    char c = get_number3();
    
       if(c == '+')
   {
     int sum = a + b; 
    printf("answer is %d", sum);
   }
   else if (c == '-')
   {
    int dif = a - b;
    printf("answer is %d", dif);
   }
   else if (c == '/')
   {
     int division = a / b;
     printf("answer is %d", division);
   }
   else if (c == '*')
   {
    int mult = a * b ;
    printf("answer is %d", mult);
   }
}

