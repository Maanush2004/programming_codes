/** VIT VPROPEL Problem of the Day 15-03-23
 * Count Same Positions
 * Given an integer 'n', write a C program to count the number of digits that are in
 * the same position after forming an integer 'm' with the digits in 'n' but in 
 * ascending order of digits. For example, if the value of 'n' is 351462987 then
 * the value of 'm' will be 123456789 and digits 4 and 8 will be in the same position.
 * 
 * Input Format
 * First line contains the value of 'n'
 * 
 * Output Format
 * Print the position of digits(ascending order) in 'n' that has same value in 'm' also
 * Print one position in one line.
 * 
 * Boundary Conditions
 * 0 < n < 10^19 **/
 
 // Program to count same positions when the number is arranged ascendingly
#include <stdio.h>
#include <string.h>

int main() {
    // Initialising array of length 20 for 20 digits i.e max number 10^19.
    char n[20],n_ascending[20],temp;
    scanf("%s", n_ascending);
    strcpy(n,n_ascending);
    // Arranging the number ascendingly
    for (int i=0;n[i]!=NULL;i++) {
        for (int j=i+1;n[j]!=NULL;j++) {
            if (n_ascending[j] < n_ascending[i]) {
                temp = n_ascending[i];
                n_ascending[i] = n_ascending[j];
                n_ascending[j] = temp;
            }
        }
    }
    // Comparing the digits in the given number and ascending number and printing common digits
    for (int i=0;n[i]!=NULL;i++) {
        if (n[i]==n_ascending[i]) {
            printf("%d\n", i+1);
        }
    }
    return 0;
}
