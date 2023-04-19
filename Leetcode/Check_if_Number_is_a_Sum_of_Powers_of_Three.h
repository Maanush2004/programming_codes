/** Leetcode 1780. Check if Number is a Sum of Powers of Three
  * Difficulty : Medium
  * https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three **/

// Function to check if the given number can be expressed in powers of 3
bool checkPowersOfThree(int n){
    /** Looking at the test cases, it can be inferred that the number can be expressed
      * in powers of three if the digits when the number is written in base 3 are 0 or 1.
      * Only then can the number be written in form 3^1 + 3^3 ... **/
    while (n > 0) {
        // Checking if we get any number other than 0 or 1.
        if (n % 3 > 1) {
            return false;
        }
        n /= 3;
    }
    return true;
}
