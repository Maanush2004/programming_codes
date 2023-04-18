/** VIT VPROPEL Problem of the Day 13-03-23
 * Classify Triplets
 * Given two integers 'l' and 'u', write a C program to identify the triplet (a,b,c)
 * where a <= b <= c and a,b,c >= l and a,b,c <=u, that are Exactly Pythagorean,
 * Very Close to Pythagorean or Close to Pythagoren. A triplet (a,b,c) is said to be
 * Exactly Pythagorean if c^2-(a^2+b^2) = 0, Very Close to Pythagorean if c^2-(a^2+b^2) = +1 or -1 and 
 * Close to Pythagorean if c^2-(a^2+b^2) = +2 or -2. For example, if l=5 and u=20
 * then the program should print
 *  5  5  7 Very Close to Pythagorean
 *  5 11 12 Close to Pythagorean
 *  5 12 13 Exactly Pythagorean
 *  5 13 14 Close to Pythagorean
 *  6  8 10 Exactly Pythagorean
 *  6 17 18 Very Close to Pythagorean
 *  6 18 19 Very Close to Pythagorean
 *  7  7 10 Close to Pythagorean
 *  7 11 13 Very Close to Pythagorean
 *  8  9 12 Very Close to Pythagorean
 *  8 15 17 Exactly Pythagorean
 *  9 12 15 Exactly Pythagorean
 * 10 15 18 Very Close to Pythagorean
 * 11 13 17 Very Close to Pythagorean
 * 12 12 17 Very Close to Pythagorean
 * 12 16 20 Exactly Pythagorean
 * 
 * Input Format
 * First line contains the value of 'l'
 * Next line contains the value of 'u'
 * 
 * Output Format
 * Print all the triplets that are Exactly, Very Close to or Close to Pythagorean triplets **/
 
 // Program to Classify triplets
#include <stdio.h>
#include <math.h>

int main() {
    int l,u;
    scanf("%d\n%d", &l, &u);
    /** Running loop for numbers a,b,c that satisfy the condition l <= a,b,c <= u
     * and a<=b <= c **/
    for (int a=l;a<=u;a++) {
        for (int b=a;b<=u;b++) {
            for (int c=b;c<=u;c++) {
                // Finding the value of c^2-(a^2+b^2) and classifying the triplets accordingly
                switch(c*c-(a*a+b*b)) {
                    case 0 :
                        printf("%d %d %d Exactly Pythagorean\n", a, b, c);
                        break;
                    case -1 :
                    case 1 :
                        printf("%d %d %d Very Close to Pythagorean\n", a, b, c);
                        break;
                    case 2 :
                    case -2 :
                        printf("%d %d %d Close to Pythagorean\n", a, b, c);
                        break;
                }
            }
        }
    }
    return 0;
}
