//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/#include<stdio.h>
int main()
{
    int percent;
    printf("Enter percentage: ");
    scanf("%d",&percent);
    if(percent<0 && percent>100){
        printf("Wrong Entry",percent);
    } else if(percent>=90 && percent<=100){
        printf("Grade A", percent);
    } else if(percent>=80 && percent<=89){
        printf("Grade B", percent);
    }else if (percent>=70 && percent<=79){
        printf("Grade C", percent);
    } else if (percent>=60 && percent<=69){
        printf("Grade D",percent);
    }else {
        printf("Grade F",percent );
    }
    return 0;
}
