//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;

};
struct employee{
    char name[50];
    int id;
    struct date joining;
};
int main()
{
    struct employee emp;
    scanf("%s",emp.name);
    scanf("%d",&emp.id);
    scanf("%d %d %d",&emp.joining.day,&emp.joining.month,&emp.joining.year);
    printf("Name:%s|Id:%d|Joining Date:%02d/%02d/%d\n",emp.name,emp.id,emp.joining.day,emp.joining.month,emp.joining.year);
    return 0;
}
