//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include<stdio.h>
int main()
{
    int n,target;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&target);
    int first=-1,last=-1;
    int low=0;int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(num[mid]==target){
            low=mid;
            high=mid-1;
        }else if(num[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    low=0;
    high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(num[mid]==target){
            last=mid;
            low=mid+1;
        }else if(num[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }

    }
    printf("%d %d",first,last);
    return 0;

}
