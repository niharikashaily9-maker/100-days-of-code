//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>
int main()
{
    int row,col,sum=0;
    scanf("%d",&row,&col);
    int matrix[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    if(row!=col){
        printf("Matrix is not square");
        return 0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        sum=sum+matrix[i][j];
    }
}
    printf("%d",sum);
    return 0;


}
