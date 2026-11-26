//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include<stdio.h>
enum Days{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY

};
int main(){
printf("%d\n",SUNDAY);
printf("%d\n",MONDAY);
printf("%d\n",TUESDAY);
printf("%d\n",WEDNESDAY);
printf("%d\n",THURSDAY);
printf("%d\n",FRIDAY);
printf("%d\n",SATURDAY);
return 0;
}
