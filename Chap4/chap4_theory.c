/* Theoretical questions from chapter 4 */

#include <stdio.h>

int main(void)
{


  /* Question 1 */
  int i_1a = 5, j_1a = 3, i_1b = 2, j_1b = 3, i_1c = 7, j_1c = 8,\
  k_1c = 9, i_1d = 1, j_1d = 2, k_1d = 3;
  
  printf("1a - Expecting 1 2:  %d %d\n", i_1a / j_1a, i_1a % j_1a); // Probably 1 and 2
  printf("1b - Expecting 0: %d\n", (i_1b + 10) % j_1b); // Probably 0
  printf("1c - Expecting 1: %d\n", (i_1c + 10) % k_1c / j_1c); // Probably 17%9 = 8 ... 8 / 8 = 1
  printf("1b - Expecting 0: %d\n", (i_1d + 5) % (j_1d + 2) / k_1d); // Probably 0 (6%4 = 2 .. 2/3 = 0)
  
  /* Question 2 */
  printf("2: (-1)/7: %d\n",(-1)/7);
  printf("In C89, integer division: if either operand is negative: the result is either the nearest integer higher or lower than the result\n");
  printf("Either way (a/b)*b + a\%b = a\n");

  return 0;
}
