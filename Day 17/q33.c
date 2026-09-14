/Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/#include<stdio.h>
int main()
{
    int n,sum=0,original,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(original==sum){
        printf("Armstrong number ");

    } else{
        printf("Not an Armstrong number");
    }
    return 0;
}
