#include <stdio.h>

int main(void)
{

  float max = 0.0f, i=-1.0f;
  
  printf("Enter a positive number, type 0 to get max of the numbers that you've entered.");

  while (i != .0f)
  {

  printf("\nEnter a number: ");
  scanf("%f", &i);
  if (i > max)
    max = i;
  if (i == 0)
    break;
  }

  printf("The largest number entered was: %f\n", max);

  return 0;
}


