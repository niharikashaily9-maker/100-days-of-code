//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/#include<stdio.h>
int main()
{
    int n,first,last,place=1,result,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    last=n%10;
    while(temp>=10){
        temp=temp/10;
        place=place*10;
    }
    first=temp;
    result=n-first*place-last+last*place+first;
    printf("%d\n",result);
    return 0;
}
