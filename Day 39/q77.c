//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int main()
{
    int row,col;
    int flag=1;
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=i+1;j<row;j++){
            if(matrix[i][i]==matrix[j][j]){
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
        if (flag==1){
            printf("True");
        }else{
            printf("False");
        }
    }
    return 0;
}
