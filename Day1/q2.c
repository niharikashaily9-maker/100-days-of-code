//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a,b: ");
    scanf("%f %f",&a,&b);
    float sum=a+b;
    float diff=a-b;
    float prod=a*b;
    printf("Sum = %.2f\n",sum);
    printf("diff= %.2f\n",diff);
    printf("prod= %.2f\n",prod);
    float quotient= a/b;

    if (b!=0){
        
        printf("Quotient: %.2f\n",quotient);
    } else {
        printf("Quotient is undefined\n");
    }
    return 0;
}
