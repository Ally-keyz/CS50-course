#include <stdio.h>

float get_average(int array[]);
 const int N = 3;

 int main()
 {
    int score[N];
    for(int i=0; i< N; i++)
    {
        printf("Score: ");
        scanf("%i",&score[i]);
    }

    printf("Average %f",get_average(score));
 }


 float get_average(int array[])
 {
    int sum;
      for(int i =0; i < N; i++)
    {
        sum += array[i];
        int  average = sum / (float) N ;
        return average;
    }

 }