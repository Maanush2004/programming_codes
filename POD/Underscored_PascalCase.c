/** VIT VPROPEL Problem of the Day 28-03-23
 * Underscored PascalCase
 * PascalCase is a naming convention of variables in programming language,
 * in which a variable name is formed from multiple words that are joined together
 * as a single word with the first letter of each of multiple words capitalised.
 * Underscored PascalCase is an extension of PascalCase where an underscore is introduced
 * between each word. Given 'n' words write a C program to form underscored PascalCase name using the given 'n' words.
 * For example, if the five words are counter, for, looping, array and elements,
 * then the output should be Counter_For_Looping_Array_Elements
 * 
 * Boundary Conditions
 * 0 < n <= 10
 * Length of each word < 20 **/

// Underscored Pascal Case
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    // Taking input of number of words
    scanf("%d",&n);
    // Condition to check for boundary condition
    if (n > 10) {
        printf("Exceeded boundary condition. Aborting.");
        return 0;
    }
    char words[10][20];
    char output_string[100];
    for (int i=0;i<n;i++) {
        scanf("%s",words[i]);
        // Capitalising the initial letter of each word
	// The difference in ASCII code between captial and small letter of an alphabet is 32.
        words[i][0] -= 32;
        // Appending it to the variable output_string
        strcat(output_string,words[i]);
        // If the word is not the last one, then also append "_" to join consecutive words.
        if (i != n-1) {
            strcat(output_string,"_");
        }
    }
    // Printing the final string.
    printf("%s", output_string);
    return 0;
}
