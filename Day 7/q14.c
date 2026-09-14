//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter alphabet: ");
    scanf("%c",&alpha);
    if((alpha=='a')||(alpha=='e')||(alpha=='i')||(alpha=='o')||(alpha=='u')||(alpha=='A')||(alpha=='E')||(alpha=='I')||(alpha=='O')||(alpha=='U')){

    
    printf("%c is vowel",alpha);
    }else{
        printf("%c is consonents",alpha);
    }
    return 0;
}
