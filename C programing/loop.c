#include <stdio.h>

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
  for(int j = 0; j < size; j++){
    printf("$");
  }
  printf("\n");
}
}

int main()
{
int a = get_string();
print_grid(a);
}


