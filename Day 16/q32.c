/Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/#include<stdio.h>
int main(){
    int n,digit,reverse=0,original;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    while(n>0){
        digit=n%10;
       reverse=reverse*10+digit;
       n=n/10;
    }
    if(original==reverse){
        printf("It is palindrome number");
    }else{
        printf("It is not palindrome number");
    }
    return 0;
}
