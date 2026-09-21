Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        int star;
        if(i<=3){
            star=2*i-1;

        }else{
            star=2*(6-i)-1;
        }
        for(j=1;j<=star;j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
