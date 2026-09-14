/Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/#include<stdio.h>
int main()
{
    int n,sum=0,digit;
    printf("Enter n: ");
    scanf("%d",&n);
    for(;n>0;)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("Sum of digits=%d",sum);
    return 0;
}
