#include <stdio.h>

int main(void)
{

float loan, interest, monthly, balance, loan_remaining;

printf("Enter amount of loan: ");
scanf("%f",&loan);
printf("Enter interest rate: ");
scanf("%f",&interest);
printf("Enter monthly payment: ");
scanf("%f",&monthly);

loan_remaining = loan*(1+interest/(12*100))-monthly;
printf("Balance remaining after first payment: %.2f\n",loan_remaining);

loan_remaining = loan_remaining*(1+interest/(12*100))-monthly;
printf("Balance remaining after second payment: %.2f\n",loan_remaining);

loan_remaining = loan_remaining*(1+interest/(12*100))-monthly;
printf("Balance remaining after third payment: %.2f\n",loan_remaining);

return 0;
}
