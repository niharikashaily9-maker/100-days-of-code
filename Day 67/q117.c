//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include<stdio.h>
int main()
{
    int m,n;
    int arr1[100],arr2[100],merged[200];
    int i=0,j=0,k=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%d",&arr2[j]);
    }
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            merged[k]=arr1[i];
            i++;
        }else{
            merged[k]=arr2[j];
            j++;

        }
        k++;
    }
    while(i<m){
        merged[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        merged[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<m+n;i++){
        printf("%d",merged[i]);
    }
    return 0;
}
