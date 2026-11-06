//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>
int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    int transpose[col][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d",transpose[j][i]);
        }
        printf("\n");
    }
    return 0;
}
