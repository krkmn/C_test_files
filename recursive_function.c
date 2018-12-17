/* A simple recursive function to help me wrap my brain around recursive functions
 * it should return a+*(a-1)+*(a-2)+...(a-a) = (a+1)/2*a */

#include <stdio.h>

int rec_fun(int a)
{
  if (a<1)
    return a;
  else
    return a + rec_fun(a-1);
}

int main(void)
{
  int sum, a;
  printf("Where should the function start from? ");  
  scanf("%d", &a);
  sum = rec_fun(a);
  printf("The sum is %d and it should be %d.\n",sum, (a+1)*a/2);

  return 0;
}
  
