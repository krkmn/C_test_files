#include <stdio.h>

int main(void){

int height, length, width, volume, weight;

height = 8;
length = 12;
width = 10;

printf("Enter height of the box: ");
scanf("%d",&height);
printf("Enter length of the box: ");
scanf("%d",&length);
printf("Enter width of the box: ");
scanf("%d",&width);

volume = height * length * width;
weight = (volume + 165) / 166;

printf("Dimension %dx%dx%d\n", length, width, height);
printf("Volume (cubic inches): %d\n", volume);
printf("Dimensional weight (pounds): %d\n", weight);

return 0;
}
 
