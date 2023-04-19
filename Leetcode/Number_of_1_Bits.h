/** Leetcode 191. Number of 1 Bits
  * Difficulty : Easy
  * https://leetcode.com/problems/number-of-1-bits **/

// Function to check for the number of 1 bits in a binary number
int hammingWeight(uint32_t n) {
    int bit_count=0;
    while (n > 0) {
        // Performing AND operation. If unit digit is 1 then it returns 1 else 0. Using it as boolean
        if (n&1) {
            bit_count++;
        }
        // Right shift to check for the next digit
        n>>=1;
    }
    return bit_count;
}
