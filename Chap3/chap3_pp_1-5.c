#include <stdio.h>

int main(void)
{
  printf("1a|%6d,%4d\n", 86, 1400);
  printf("1b|%12.5e\n", 30.253);
  printf("1c|%0.4f\n", 83.162);
  printf("1d|%-6.2g\n", .0000009979);
  printf("_____\n");

  float float_2, float_2_2;
  float_2 = 1000000000.0f;
  float_2_2 = 100.0f;
  printf("2a|%-8.1e\n",float_2);
  printf("2b|%10.6e\n",float_2);
  printf("2c|%-8.3f\n",float_2_2);
  printf("2d|%6.0f\n",float_2_2);	
  printf("_____\n");

  int int_3;
  int_3 = 100000000;
  printf("3a|");
  printf("%d",int_3);
  printf("|");
  printf(" %d",int_3);
  
  printf("\n3b|");
  printf("%d-%d-%d", int_3, int_3, int_3);
  printf("|");
  printf("%d -%d -%d", int_3, int_3, int_3);

  printf("\n3c|");
  printf("%f", float_2_2);
  printf("|");
  printf("%f ", float_2_2);

  printf("\n3d|");
  printf("%f,%f", float_2_2, float_2_2);
  printf("|");
  printf("%f, %f", float_2_2, float_2_2);

  /*
  printf("____\n");
  int i, j;
  float x;
  printf("4|Input i x j ");
  scanf("%d%f%d", &i, &x, &j);
  printf("\ni %d\nx %f\nj %d\n", i, x, j);
  */  

  printf("____\n");
  int ii;
  float xx, y;
  printf("5|Input x i y ");
  scanf("%f%d%f", &xx, &ii, &y);
  printf("\nx %f\ni %d\ny %f", xx, ii, y);
 


  return 0;
}



