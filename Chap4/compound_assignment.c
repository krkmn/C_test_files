/* Simple check on a simple compound assignments */

#include <stdio.h>

int main(void)
{
  int i = 1, j = 2, k = 3;
  i += j + k;
  printf("\n%d\n", i); //Hopefully we will get 6 here

  int a = 1;
  a--;
  printf("%d\n",a); //Hopefully we will get 0 here

  float b = 1.0f;
  printf("%f\n",--b);

}
 

