#include <stdio.h>

int main(void)
{
  int integer_base_10;
  int integer_base_8;
  int digit_1;
  int digit_2;
  int digit_3;
  int digit_4;
  int digit_5;  

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &integer_base_10);
  
  digit_1 = integer_base_10 % 8;
  integer_base_10 -= digit_1;
  digit_2 = ((integer_base_10) / 8) % 8;
  integer_base_10 -= digit_2*8;
  digit_3 = (integer_base_10/(8*8))%8;
  integer_base_10 -= digit_3*8*8;
  digit_4 = (integer_base_10/(8*8*8))%8;
  integer_base_10 -= digit_4*8*8*8;
  digit_5 = integer_base_10/(8*8*8*8);

  printf("In octal, your number is: %d%d%d%d%d\n",digit_5, digit_4, digit_3, digit_2, digit_1);

}
 
   




  

