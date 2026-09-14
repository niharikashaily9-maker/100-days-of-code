//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l , &b);
    int area=l*b;
    int perimeter=2*(l+b);
    printf("Area is %d\n", area);
    printf("Perimeter is %d\n", perimeter);
    return 0;
}
