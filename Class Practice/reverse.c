/** IPS 10-4-23
  * Write a C function reverse(str1) that returns the reverse of the given string str1. Use pointers to solve this question.
  * Eg: FUNCTION when sent to the function reverse will return NOITCNUF **/

// Program to reverse given string

#include <stdio.h>
#include <string.h>

// Function to reverse the given string
char *reverse(char *str1) {
    // Storing the string length
    int string_len = strlen(str1);
    char temp = NULL;
    int loop_index = string_len/2;
    if (string_len % 2 != 0) {
		loop_index++;
    }
    // Swapping nth from front and nth from back elements
    for (int i=0; i < loop_index; i++) {
		temp = *(str1+i);
		*(str1+i) = *(str1+string_len-i-1);
		*(str1+string_len-i-1) = temp;
		temp = NULL;
    }
    // Returning the reversed string
    return str1;
}

int main() {
    char string[100];
    // Taking input of string
    scanf("%s", string);
    // Passing the input string to reverse function and printing reverse string
    printf("%s", reverse(string));
    return 0;
}
