//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float simple,compound,amount;
    printf("Enter principal amount: ");
    scanf("%f",&p);
    printf("Enter annual interest rate: ");
    scanf("%f",&r);
    printf("Enter time period: ");
    scanf("%f", &t);
    simple=(p*r*t)/100.0;
    amount=p*pow((1+r/100.0),t);
    compound= amount-p;
    printf("Simple interest:%.2f\n",simple);
    printf("Compound interest:%.2f\n",compound);
    printf("Principal amount:%.2f\n",p);
    printf("Total amount:%.2f\n",amount);
    return 0;
}
