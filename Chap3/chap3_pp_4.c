#include <stdio.h>

int main(void)
{
  int left, mid, right;

  printf("Enter a phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &left, &mid, &right);

  printf("You entered %d.%d.%d\n", left, mid, right);

  return 0;
}
