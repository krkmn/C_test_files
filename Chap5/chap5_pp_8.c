#include <stdio.h>

int main(void)
{

  int hour, minute;
  int minute_time;
  int dep_1=8*60, dep_2=9*60+43, dep_3=11*60+19, dep_4=12*60+47, dep_5=14*60, dep_6=15*60+45;
  int dep_7=19*60, dep_8=21*60+45;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  minute_time = hour*60 + minute;

  int min = 100000000;
  int hour_dep;

  if ((minute_time - dep_1)* (minute_time - dep_1) < min)
  {
    min = (minute_time - dep_1)* (minute_time - dep_1);
    hour_dep = 8;
  }
  if ((minute_time - dep_2)* (minute_time - dep_2) < min)
  {
    min = (minute_time - dep_2)* (minute_time - dep_2);
    hour_dep = 9;
  }
  if ((minute_time - dep_3)* (minute_time - dep_3) < min)
  {
    min = (minute_time - dep_3)* (minute_time - dep_3);
    hour_dep = 11;
  }
  if ((minute_time - dep_4)* (minute_time - dep_4) < min)
  {
    min = (minute_time - dep_4)* (minute_time - dep_4);
    hour_dep = 12;
  }
  if ((minute_time - dep_5)* (minute_time - dep_5) < min)
  {
    min = (minute_time - dep_5)* (minute_time - dep_5);
    hour_dep = 14;
  }
  if ((minute_time - dep_6)* (minute_time - dep_6) < min)
  {
    min = (minute_time - dep_6)* (minute_time - dep_6);
    hour_dep = 15;
  }
  if ((minute_time - dep_7)* (minute_time - dep_7) < min)
  {
    min = (minute_time - dep_7)* (minute_time - dep_7);
    hour_dep = 19;
  }

  if ((minute_time - dep_8)* (minute_time - dep_8) < min)
  {
    min = (minute_time - dep_8)* (minute_time - dep_8);
    hour_dep = 21;
  }

  if (hour_dep==8)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
  else if (hour_dep==9)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  else if (hour_dep==11)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  else if (hour_dep==12)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
  else if (hour_dep==14)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  else if (hour_dep==15)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
  else if (hour_dep==19)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
  else if (hour_dep==21)
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

  return 0;
}

