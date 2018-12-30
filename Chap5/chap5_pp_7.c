#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  int max_ab, min_ab;
  int max_cd, min_cd;
  int max, min;


  
  printf("Enter four integers: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  if (a > b)
  {
    max_ab = a;
    min_ab = b;
  }
  else
  {
    max_ab = b;
    min_ab = a;
  }

  if (c > d)
  {
    max_cd = c;
    min_cd = d;
  }
  else
  {
    max_cd = d;
    min_cd = c;
  }

  if (max_ab > max_cd)
    max = max_ab;
  else
    max = max_cd;
  
  if (min_ab < min_cd)
    min = min_ab;
  else
    min = min_cd;

  printf("Largest: %d\nSmallest: %d\n", max, min);

  return 0;
}
   

  
