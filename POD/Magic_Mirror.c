/** VIT VPROPEL Problem of the day 21-02-23
 * Magic Mirror
 * When a number 'n' is shown in a magic mirror it displays two numbers 'n1' and 'n2' in it.
 * The number n1 is formed by the digits in odd position in n but in reverse and
 * the number n2 is formed by the digits in even position in n but in reverse.
 * For example, in the number 75346, the first number displayed in the mirror is 637 and
 * the second number displayed in the mirror is 45 **/

// Magic Mirror Program
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    int num = n;
    int digits=0;
    // Finding the number of digits in the given number
    while (num / 10 > 1) {
        num/=10;
        digits +=1;
    }
    /** For finding a digit from any number, for eg 1234, the digit 2 can be acquired
	  by doing the following operations -> (1234-1000) / 100 (The division performed here is floor division)**/
    // Printing each digit in even position in reverse
    for (int i=(digits%2!=0);i <= digits;i = i + 2) {
        printf("%0.0f",floor((n-floor(n/pow(10,i+1))*pow(10,i+1))/pow(10,i)));
    }
    // Printing each digit in odd position in reverse
    printf("\n");
    for (int j =(digits%2==0);j <= digits;j = j + 2) {
        printf("%0.0f",floor((n-floor(n/pow(10,j+1))*pow(10,j+1))/pow(10,j)));
    }
    return 0;
}
