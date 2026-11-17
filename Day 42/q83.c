//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
int main()
{
    char str[100];
    int vowels=0,consonents=0;
    int i=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U'){
                vowels++;
            }
    else if ((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >='A' && str[i] <= 'Z')){
                    consonents++;
                }
                i++;
}
printf("Vowels=%d consonents=%d",vowels,consonents);
return 0;
}
