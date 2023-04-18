/** VIT VPROPEL Problem of the Day 10-03-23
 * Arithmetic of Secret Agent
 * A secret agent 'Y' communicates the secret word to his head office as two words
 * 'W1' and 'W2'. The number of characters in the codeword is one more than the
 * maximum length of 'W1' and 'W2'. He has given instruction to his head office to do
 * arithmetic on the letters of the alphabet using the following rules:
 * 
 * 1. Addition happens similar to numeric addition and starts from the right most character
 *    of the words
 * 2. The ASCII value of the characters is used for addition. The right most digit of the result
 *    is taken as sum and the remaining digits are considered as carry. The letter corresponding
 *    to the character position in English alphabet of sum will be the character in the codeword
 *    (i.e) 0-a,1-b,2-c,....,25-z.
 * 3. The carry is added along with the next character to the left of the current character
 * 4. The steps 1-3 are repeated till the left most character of the longest word among 'W1' and 'W2'
 *    is reached. When end of the words 'W1' or 'W2' is reached then the remaining characters of the longer word
 *    alone take part in addition with carry.
 * 5. The last sum we got will be next to the left most character of the codeword. The carry left out will
 *    will give the leftmost character of the codeword and it may have more than one digit. If the value exceeds 25,
 *    then the equivalent character in the alphabet is obtained in a cyclic manner. i,e 26-a, 27-b and so on.
 * 
 * Given two words W1 and W2, develop a pseudocode and a C code to find the codeword sent by the agent.
 * 
 * For example, if S1='zap' and S2='zap', then the numerical sum is 26564 and the equivalent alpha sum is 
 * obtained as follows :
 * 
 * 26-'a', 5-'f', 6-'g', 4-'e'
 * 
 * Hence, the alpha sum is 'afge' **/

// Program to find Arithmetic of Secret Agent.
#include <stdio.h>
#include <math.h>

int main() {
    char w1[10],w2[10];
    int sum=0,carry=0,temp_sum=0,digit=0,w1_length=0,w2_length=0;
    // Taking input of both the words and finding the maximum length between those two.
    scanf("%s", w1);
    scanf("%s", w2);
    do {
        w1_length++;
    } while (w1[w1_length] != NULL);
    do {
        w2_length++;
    } while (w2[w2_length] != NULL);
    int max = ((w1_length>=w2_length)?w1_length:w2_length);
    if (w1_length>w2_length) {
        for (int i=w2_length-1;i>=0;i--) {
            w2[i+w1_length-w2_length] = w2[i];
            if (i >= w1_length-w2_length) {
                w2[i] = w2[i-w1_length-w2_length];
            } else {
                w2[i] = NULL;
            }
        }
    }
    // Performing the numerical sum and also storing the carry and using it in the successive operation 
    for (int i=max-1;i>=0;i--) {
        temp_sum = (int)w1[i]+(int)w2[i];
        sum += ((temp_sum+carry)%10) * ((int)pow(10,max-i-1));
        carry = ((temp_sum+carry)-((temp_sum+carry)%10))/10;
    }
    // Converting the carry into ASCII code and printing it.
    carry = ((carry > 25) ? (carry+71):(carry+97));
    printf("%c", carry);
    // Printing each letter corresponding to the digit.
    for (int i=0;i<max;i++) {
        digit = (int)(sum/(int)pow(10,max-i-1))-(int)((sum/(int)pow(10,max-i))*10);
        printf("%c", digit+97);
    }
    return 0;
}
