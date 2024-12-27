#include <stdio.h>

int get_string(void);
void print_grid(int size);


int main()
{
int n;
n = get_string();
print_grid(n);
}




int get_string(void)
{
  int a;
  
  do{
     printf("Size: ");
     scanf("%d",a);
  }
  while (a < 1);
  return a;
}

void print_grid(int size)
{
for(int i = 0; i < size; i++){
    printf("$");
}
}