#include <stdio.h>

int main()
{
  int number, digits;
  
  printf("Enter a number 0<= x <10000: ");
  scanf("%d", &number);

  if (number < 10)
    printf("The number %d has 1 digit\n", number);
  else if (number < 100)
    printf("The number %d has 2 digits\n", number);
  else if (number < 1000)
    printf("The number %d has 3 digits\n", number);
  else if (number < 10000)
    printf("The number %d has 4 digits\n", number);
  else
    printf("Don't know how many digits there are in %d\n", number);

  return 0;
}

