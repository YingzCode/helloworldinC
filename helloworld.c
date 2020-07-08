#include <stdio.h>

int main(void)
{
  char name[100];
  printf("Enter name: ");
  scanf("%s", name);
  printf("Hello, %s\n!", name);
}
