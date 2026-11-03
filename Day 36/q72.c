//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int sum = 0;

    // Read rows and columns
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of all elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}
