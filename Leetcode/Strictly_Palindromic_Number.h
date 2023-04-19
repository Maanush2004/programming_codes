/** Leetcode 2396. Strictly Palindromic Number
  * Difficulty : Medium
  * https://leetcode.com/problems/strictly-palindromic-number/description **/

/** Function to convert given decimal number in terms of required base and store digits
  * in array in the respective indices **/
void base_convert(int num, int base, int *conv_num) {
    /** The length of the required number can be found by the non-decimal part
      * of num/base if num is not a multiple of base else it is num/base+1 **/
    int size = (num%base==0)?(num/base+1):(num/base);
    for (int i=size; i > 0; i--) {
        conv_num[size-i] = num % base * (int)pow(10,size-i);
        num/=base;
    }
}

// Function to check if a given number is strictly palindromic
bool isStrictlyPalindromic(int n){
    int len;
    // Looping and checking the condition with all bases from 2 to n-2
    for (int i=2; i <= n-2; i++) {
        len = (n%i==0)?(n/i+1):(n/i);
        int conv_num[len];
        base_convert(n,i, conv_num);
        // Looping through the array of digits of base-converted number 
        for (int i=0; i<len/2;i++) {
            // Comparing ith element from first with ith element from last
            if (conv_num[i] != conv_num[len-i-1]) {
                return false;
            }
        }
    }
    return true;
}
