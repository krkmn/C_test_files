/* Trying out some escape sequences */

#include <stdio.h>

int main(void)
{

  printf("Beep\a backspace \b New line\nHorizontal\ttab");
  printf("100 beeps");
  for(int i=0;i<100;i++) // Apparently declaring variables inside the for loop was not valid until C99 better to declare i outside int i;
  {
   printf("\a%d",i);
  }	

  printf("\n");
  return 0;
}
