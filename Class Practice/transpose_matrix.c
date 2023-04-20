// Finding transpose of a matrix

#include <stdio.h>

// Function to print transpose of matrix
int main() {
    int m,n,temp;
    // Taking input of number of rows and columns of matrix
    printf("Enter number of rows in matrix : ");
    scanf("%d", &m);
    printf("Enter number of columns in matrix : ");
    scanf("%d", &n);
    int matrix[m][n];
    int transpose_matrix[n][m];
    // Storing the elements in matrix
    printf("Enter each element of the matrix one after the other with respect to rows\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    /** Storing the transpose elements in transpose_matrix
        For Eg. the element of ith row and jth column would be
                jth row and ith column in the transpose matrix **/
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            transpose_matrix[i][j] = matrix[j][i];
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
