#include <stdio.h>

int main(void)
{
  int item_number, day, month, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%-4d\t\t$%6.2f\t\t%.2d/%.2d/%d\n", item_number, unit_price, month, day, year);

  return 0;
}
