#include <stdio.h>

typedef struct
{
    char name;
    int number;
}
persons;

int main(void)
{
   persons people[2];

   people[0].name = 'a';
   people[0].number = 1023457;
   people[1].name = 'b';
   people[1].number = 20405059;


   char name;

   printf("Search: ");
   scanf("%c",&name);


   for(int i=0; i<2;i++)
   {
       if(people[i].name == name)
       {
           printf("Found: %i",people[i].number);
           return 0;
       }
   }

   printf("Not Found!!");
   return 1;
}