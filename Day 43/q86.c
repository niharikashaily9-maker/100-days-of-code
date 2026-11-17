//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    char str[100];
    int length=0,i,flag=1;
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0'&& str[length]!='\n'){
        length++;
    }
    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            flag=0;
            break;
        }

    }
    if(flag==1){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }
    return 0;
}
