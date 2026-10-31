//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main()
{
    int n,i;
    int positive,negative,zero;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            negative++;
        }else if(arr[i]>0){
            positive++;
        }else{
            zero++;
        }

        
    }
    printf("Positive=%d Negative=%d Zero=%d",positive,negative,zero);
    return 0;
} 
