/** VIT VPROPEL Problem of the Day 12-03-23
 * Count Beeps
 * Binary representation of a number 'n' is written on a circle which is divided into 'm' segments.
 * Here the number of bits required to represent 'n' is 'm'.
 * A needle is fixed on the top of this circle and the circle rotates in clockwise direction for every turn
 * Till a complete rotation is made that is the number of rotations is equal to 'm-1'
 * Let the segment pointed by the needle be 'p'. A beep sound is made when the decimal equivalent 
 * binary digits is even when read from the next segment to the right of 'p' to the segment 'p'.
 * Given the binary digits written on the segment from the segment next to 'p' to 'p'.
 * Write a C program to find the number of times beep sound will be made. For example,
 * If the initial configuration of binary string given is '1001101' then the binary strings obatained by rotation are
 * 1001101
 * 1100110
 * 0110011
 * 1011001
 * 1101100
 * 0110110
 * 0011011
 * The binary strings 1100110, 1101100 and 0110110 are even when decimal equivalent it taken.
 * Hence beep sound will be made three times.
 * 
 * Boundary Conditions
 * Length of the binary string < 25
 * 
 * Input Format
 * First line contains the binary representation of the number 'n'
 * 
 * Output Format
 * Print the number of times beep sound will be made **/
 
 //Program to find beepcount
#include <stdio.h>
#include <string.h>
int main() {
    char n[26];
    int even=0;
    scanf("%s", n);
    /** Counting the number of zeroes in the given string,
     * because in a circular rotation every digit gets same chances to be at a certain position
     * Zero at the unit digit of binary number makes the number even.
     * So the number of zeros gives us the number of beeps. **/
    for (int i=0;i<strlen(n);i++) {
        if (n[i] == '0') {
            even += 1;
        }
    }
    printf("%d", even);
    return 0;
}
