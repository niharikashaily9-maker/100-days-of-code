//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/#include<stdio.h>
int main()
{
    float SP,CP,amount,percentage;
    printf("Enter Selling price: ");
    scanf("%f",&SP);
    printf("Enter costing price: ");
    scanf("%f",&CP);
    if(SP>CP){
        amount=SP-CP;
        percentage=(amount/CP)*100;
        printf("Profit amount: %.2f\n",amount);
        printf("Profit percentage: %.2f\n",percentage);
    }else if(CP>SP){
        amount=CP-SP;
        percentage=(amount/CP)*100;
        printf("Loss amount: %.2f\n",amount);
        printf("Loss percentage: %.2f\n",percentage);
    }else{
        printf("No profit No loss");
    }
    return 0;
}
