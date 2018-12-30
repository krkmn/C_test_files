#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
  int check_digit;
  int double_check_digit;  

  printf("Enter the first (=single) digit: ");
  scanf("%1d", &d);
  printf("Enter the first group (five digits): ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group (five digits): ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  printf("Enter check digit: ");
  scanf("%1d", &check_digit);  

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;
  double_check_digit = 9 - ((total - 1) % 10);
  
  if (check_digit == double_check_digit)
    printf("VALID\n");
  else
    printf("NOT VALID\n");

  printf("Your check digit vs ours: %d | %d\n", check_digit, double_check_digit);

  return 0;
}

