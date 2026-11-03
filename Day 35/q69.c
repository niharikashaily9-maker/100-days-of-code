//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
    int n,i,arr[100];
    int largest,secondlargest;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     largest=arr[0];
    secondlargest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    int found=0;
    for(i=0;i<n;i++){
        if(arr[i]<largest){
            if(found==0||arr[i]>secondlargest){
                secondlargest=arr[i];
                found=1;
            }
        }
    }
    if(found){
        printf("%d",secondlargest);
    }else{
        printf("No second element");
    }
    return 0;
}
