#include <stdio.h>

int main()
{
    int two_digit;
    printf("Enter a two-digit number: ");
    scanf("%d", &two_digit);

    printf("You entered the number ");

    if (two_digit>=10 && two_digit<20)
    {
        switch (two_digit)
        {
        case 10:
            printf("ten.\n");
            return 0;
            break;
        case 11:
            printf("eleven.\n");
            return 0;
            break;
        case 12:
            printf("twelve.\n");
            return 0;
            break;
        case 13:
            printf("thirteen.\n");
            return 0;
            break;
        case 14:
            printf("fourteen.\n");
            return 0;
            break;
        case 15:
            printf("fifteen.\n");
            return 0;
            break;
        case 16:
            printf("sixteen.\n");
            return 0;
            break;
        case 17:
            printf("seventeen.\n");
            return 0;
            break;
        case 18:
            printf("eighteen.\n");
            return 0;
            break;
        case 19:
            printf("nineteen.\n");
            return 0;
            break;

        }
     }

     int ten_digit, one_digit;
     ten_digit = two_digit / 10;
     one_digit = two_digit % 10;

    switch (ten_digit)
        {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        }

    switch (one_digit)
        {
        case 0:
            printf(".\n");
            break;
        case 1:
            printf("-one.\n");
            break;
        case 2:
            printf("-two.\n");
            break;
        case 3:
            printf("-three.\n");
            break;
        case 4:
            printf("-four.\n");
            break;
        case 5:
            printf("-five.\n");
            break;
        case 6:
            printf("-six.\n");
            break;
        case 7:
            printf("-seven.\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine.\n");
            break;
        }
        
    return 0;
}
