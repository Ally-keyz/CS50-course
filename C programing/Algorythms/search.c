#include <stdio.h>

int main()
{
    int N;
    int list[] = {10,30,20,40,60,50,70};

    printf("Search: ");
    scanf("%i",&N);

    for(int i = 0 ; i < 7; i++)
    {
        if (list[i] == N)
        {
            printf("Found %i",list[i]);
            return 0;
        }
        
    }
    

    printf("Not Found!!");
    return 1;
}
