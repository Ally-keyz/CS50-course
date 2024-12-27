#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <ctype.h>



int main()
{
    char *s;
    char *t;


    printf("Enter string: ");
    scanf("%s", s);

    t = malloc(strlen(s) + 1);

    strcpy(t,s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    

     printf("The value of s: %s \n",s);
     printf("the value of t: %s \n",t);


    return 0;
}