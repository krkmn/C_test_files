#include <stdio.h>

int main(void)
{
  int dd, mm, yy;

  printf("Enter a date (dd/mm/yy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);

  printf("You entered the date %d%.2d%.2d\n", yy, mm, dd);

  return 0;
}
