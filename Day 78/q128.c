//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *file;
    int ch;
    char filename[100];
    int vowels=0,consonents=0;
    printf("Enter filename: ");
    scanf("%s",filename);
    file=fopen(filename,"r");
    if(file==NULL){
        printf("Error\n");
        return 1;
    }
    while((ch=fgetc(file))!=EOF){
        ch=tolower(ch);
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o'){
                vowels++;
            }else{
                consonents++;
            }
        }
    }
    fclose(file);
    printf("Vowels:%d\n",vowels);
    printf("Consonents:%d\n",consonents);
    return 0;
}
