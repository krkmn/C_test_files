#include <stdio.h>

int main()
{
int i_1a = 2, j_1a = 3, k_1a;
k_1a = i_1a * j_1a == 6;

int i_1b = 5, j_1b = 10, k_1b = 1;
int i_1c = 3, j_1c = 2, k_1c = 1;
int i_1d = 3, j_1d = 4, k_1d = 5;

printf("1a:%d | My guess: 1\n", k_1a);
printf("1b:%d | My guess: 1\n", k_1b > i_1b < j_1b);
printf("1c:%d | My guess: 1\n", i_1c < j_1c == j_1c < k_1c);
printf("1d:%d | My guess: (3 + 3) < 5 = 0\n", i_1d % j_1d + i_1d <k_1d);

return 0; 
}

