/** VIT VPROPEL Problem of the Day 14-03-23
 * Hands of the Clock
 * In the dial of an analog clock, twelve alternate letters of the English alphabet are written
 * to indicate 1 to 12
 * 
 * Capital letters are written and it may start from any letter A to D. Given the
 * letter from which numbering starts, a hour of the time, a minute of the time, write a
 * C program to find out the position of hour hand and minute hand. For example,
 * if the numbering starts from 'D' and the hour of the given time is 19 and minute 
 * of the given time is 45 then the hour hand will be "Between P and R" and minute hand
 * will be "On T". If the time is 07:00 then the hour hand will be "On P" and minute hand
 * will be "On Z". Only valid time will be given as input, hour will be given from 0 to 24 and minute will be from 0 to 59.
 * 
 * Input Format
 * First line contains the letter from which the number starts
 * Next line contains the hour of the time
 * Next line contains the minute of the time
 * 
 * Output Format
 * In the first line, print the position of hour hand - Print on a particular letter or Between two letters
 * In the next line, print the position of minute hand **/

// Program to find the position of the clock
#include <stdio.h>

int main() {
    // Taking input of the letter and time
    char letter;
    int m,h;
    scanf("%c", &letter);
    scanf("%d", &h);
    scanf("%d", &m);
    // Converting 24 hour format time to 12 hour format if the given time is in 24 hour format.
    h = (h>=12)?(h-12):h;
    // The hour hand will always be between 2 letters unless the minute is 0
    if (m != 0) {
        printf("Between %c and %c\n", ((h!=0)?(letter+2*(h-1)):(letter+22)), ((h==12)?(letter):(letter+2*h)));
    } else {
        printf("On %c\n", (h!=0)?(letter+2*(h-1)):letter+22);
    }
    // The minute hand will be exactly on a letter only when the minute is a multiple of 5.
    if (m%5 == 0) {
        printf("On %c", ((m!=0)?(letter+2*(m/5-1)):(letter+22)));
    } else {
        printf("Between %c and %c", ((m>=5)?(letter+2*(m/5-1)):(letter+22)), ((m!=0)?(letter+2*(m/5)):(letter+24)));
    }
    return 0;
}
