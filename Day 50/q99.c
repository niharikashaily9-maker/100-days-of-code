//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char date[20];
    char result[20];

    scanf("%s", date);

    result[0] = date[0];
    result[1] = date[1];
    result[2] = '-';

    result[3] = 'A';
    result[4] = 'p';
    result[5] = 'r';

    result[6] = '-';

    result[7] = date[6];
    result[8] = date[7];
    result[9] = date[8];
    result[10] = date[9];

    result[11] = '\0';

    printf("%s", result);

    return 0;
}
