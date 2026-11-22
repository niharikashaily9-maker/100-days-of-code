//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];
    int start = 0, maxLen = 0;

    // Input string
    scanf("%s", s);

    // Initialize all character positions to -1
    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++) {

        // If character already exists in current substring
        if (last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }

        // Store latest position of character
        last[(unsigned char)s[i]] = i;

        // Calculate current substring length
        int length = i - start + 1;

        if (length > maxLen) {
            maxLen = length;
        }
    }

    printf("%d", maxLen);

    return 0;
}
