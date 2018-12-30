#include <stdio.h>

int main(void)
{
  float commission_us, commission_them, value;
  float amount, price;

  printf("Please enter the number of shares and price per share: ");
  scanf("%f%f",&amount, &price);
  value = amount * price;

  if (value < 2500.00f)
    commission_us = 30.00f +0.017f * value;
  else if (value < 6250.00f)
    commission_us = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    commission_us = 76.00f + 0.0034f * value;
  else if (value < 50000.00f)
    commission_us = 100.00f + 0.0022f * value;
  else if (value < 500000.00f)
    commission_us = 155.00f + 0.011f * value;
  else
    commission_us = 255.00f + 0.0009f * value;
  
  if (commission_us < 39.00f)
    commission_us = 39.00f;

  
  if (amount < 2000)
    commission_them = 33.00f + 0.03f * amount;
  else
    commission_them = 33.00f + 0.02f * amount;

  printf("Our commission: %2.2f\nRival commission: %.2f\n", commission_us, commission_them);

  return 0;
}
