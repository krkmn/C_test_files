#include <stdio.h>

int main(void)
{
float r, v, pi = 3.14f;

printf("What is the radius of the sphere? ");
scanf("%f",&r);

printf("radius: %.2f\n",r);
printf("The volume of the sphere is: %.2f\n",4.0f/3.0f*pi*r*r*r);

return 0;
}
