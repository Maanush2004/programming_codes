/** VIT VPROPEL Problem of the Day 05-03-23
 * Shuffled Rows Matrix
 * A matrix is said to be shuffled rows matrix if the elements in all the rows are
 * same byt may be in a shuffled order. Given nxm matrix, write a C program
 * to check if the matrix is a Shuffled Rows Matrix. For example, a 3x4 matrix M as 
 * shown below is a Shuffled rows matrix :
 * 
 * 4 5 1 7
 * 7 1 4 5
 * 1 7 5 4
 * 
 * Whereas the matrix M1 shown below is not a Shuffled row matrix
 * 
 * 3 1 2
 * 3 3 1
 * 1 2 3
 * 
 * Boundary Conditions
 * 0 < r,c < 20
 * 
 * Input Format
 * First line contains the number of rows in the matrix, m
 * Next lien contains the number of columns in the matrix, n
 * Next 'm' lines contain the elements in each row of the matrix seperated by a space
 * 
 * Output Format
 * Print Shuffled Row Matrix or Not Shuffled Row Matrix **/

// Program to check if the given matrix is a Shuffled Rows Matrix
#include <stdio.h>

int main() {
    // Initialising and taking input of number of rows and columns
    int m,n,element,matrix[20][20],boolean=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d",&element);
            matrix[i][j] = element;
        }
    }
    /** Checking elements in each row and comparing with the elements in the first row
     * If the boolean is set to 0, the program exits by printing Not Shuffled Row Matrix
     * Else the program continues and prints Shuffled Row Matrix **/
    for (int k=0;k<n;k++) {
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (matrix[i][j] == matrix[0][k]) {
                    boolean = 1;
                    break;
                }
            }
        if (boolean == 0) {
            printf("Not Shuffled Row Matrix");
            return 0;
        }
        if (i < m-1) {
            boolean=0;
        }
        }
    }
    printf("Shuffled Row Matrix");
    return 0;
}
