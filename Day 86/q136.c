//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>
enum operation{
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main()
{
    int a,b;
    char choice[20];
    enum operation op;
    scanf("%s %d %d",choice,&a,&b);
    if(strcmp(choice,"ADD")==0)
    op=ADD;
    else if (strcmp(choice,"SUBTRACT")==0)
    op=SUBTRACT;
    else if(strcmp(choice,"MULTIPLY")==0)
    op=MULTIPLY;
    else{
        printf("Invalid");
        return 0;
    }
switch(op)
{
    case ADD:
    printf("%d",a+b);
    break;
    case SUBTRACT:
    printf("%d",a-b);
    break;
    case MULTIPLY:
    printf("%d",a*b);
    break;
}
return 0;

}
