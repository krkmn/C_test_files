#include <stdio.h>

int main(void)
{
  int hour, minute;
   
  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hour, &minute);
    
  int modified_hour;
  printf("Equivalent 12-hour time: ");
  if(hour>12)
  {
    modified_hour = hour - 12;
    printf(" %d:%.2d PM\n", modified_hour, minute);
  }  
  else if (hour == 0) 
  {
   modified_hour = hour;
   printf("%d:%.2d AM\n", modified_hour, minute);
  }
 else if (hour == 12)
  {
   modified_hour = hour;
   printf(" %d:%.2d PM\n", modified_hour, minute);
  }
  else  
  {
   modified_hour = hour;
   printf(" %d:%.2d AM\n", modified_hour, minute);
  }


  return 0;
}
