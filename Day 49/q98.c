//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    // Remove newline
    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print first initial
    printf("%c.", name[0]);

    // Print initials of middle names
    for (i = 1; i < lastSpace; i++)
    {
        if (name[i - 1] == ' ')
            printf("%c.", name[i]);
    }

    // Print surname in full
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}
