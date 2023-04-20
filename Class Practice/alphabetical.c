/** IPS 10-4-23
  * Write a C function rearrange(strs, n) that rearranges n strings strs (of variables sizes) in the alphabetical order. Use pointer notation.
  * Input :
  * size of the array
  * Uma
  * Rani
  * Somu
  * Kannan
  * Output :
  * Kannan
  * Rani
  * Somu
  * Uma **/

// Program to print the given names in alphabetical order
#include <stdio.h>
#include <string.h>

// Function to rearrange strings in array in alphabetical order
void rearrange(char str[][10], int n) {
    char temp[10];
    for (int i=0; i<n; i++) {
	for (int j=i+1; j<n; j++) {
	    if (str[i][0]>str[j][0]) {
		strcpy(temp,*(str+i));
		strcpy(*(str+i),*(str+j));
		strcpy(*(str+j),temp);
	    }
	}
    }
}

int main() {
    int n;
    scanf("%d", &n);
    // Taking input of names
    char names[n][10];
    for (int i=0; i<n; i++) {
        scanf("%s", names[i]);
    }
    // Passing names to rearrange function
    rearrange(names,n);
    // Printing the names in rearranged array
    for (int i=0; i<n; i++) {
	printf("%s\n", names[i]);
    }
    return 0;
}
