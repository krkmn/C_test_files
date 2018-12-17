#include <stdio.h>

int main(void)
{
  int a, a_rev;
  int digit_100, digit_10, digit_1;

  printf("Enter a three-digit number: ");
  scanf("%d", &a);
  digit_100 = a / 100;
  digit_10 = (a / 10) % 10;
  digit_1 = a % 10;
  printf("The reversal is: %d%d%d\n", digit_1, digit_10, digit_100);

  return 0;
}
