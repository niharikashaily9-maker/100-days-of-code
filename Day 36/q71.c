//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main()
{
    int row,col,i,j;
    int matrix[100][100];
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;i<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
