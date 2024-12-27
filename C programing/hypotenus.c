#include <stdio.h>


float get_hypotenus(int array[]);

int N = 2;

int main()
{
    int querry[N];

    for(int i = 0; i < N; i++)
    {
        printf("Enter side: ");
        scanf("%i",&querry[i]);  
    }
     
     printf("The hypotenus is: %f",get_hypotenus(querry));
}

float get_hypotenus(int array[])
{
   int formulae;
   for(int i=0; i<N; i++)
   {
    formulae += array[i];
    int outPut = formulae / 2 ;
    return outPut;
   }
}