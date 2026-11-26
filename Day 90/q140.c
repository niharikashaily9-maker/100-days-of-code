//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
#include<string.h>
enum gender{
    MALE,
    FEMALE,
    OTHER
};
struct person{
    enum gender gender;
};
int main()
{
    char input[20];
    struct person p;
    scanf("%s",input);
    if(strcmp(input,"MALE")==0)
    p.gender=MALE;
    else if(strcmp(input,"FEMALE")==0)
    p.gender=FEMALE;
    else if(strcmp(input,"OTHER")==0)
    p.gender=OTHER;
    else{
        printf("Invalid");
        return 0;
    }
    switch(p.gender){
        case MALE:
        printf("Male");
        break;
        case FEMALE:
        printf("Female");
        break;
        case OTHER:
        printf("Others");
        break;
    }
    return 0;

}
