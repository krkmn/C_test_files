#include <stdio.h>

/* Will %md only read m of the digits in scanf? Answer: yes */


int main(void)
{

  int d;
  printf("Insert a number: ");
  scanf("%3d", &d);
  printf("Was %d your number?\n", d);

  return 0;
}
