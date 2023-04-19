/** Leetcode 2433. Find The Original Array of Prefix Xor
  * Difficulty : Medium
  * https://leetcode.com/problems/find-the-original-array-of-prefix-xor **/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// Function to find the original array of prefix xor
int* findArray(int* pref, int prefSize, int* returnSize){
    *returnSize = prefSize;
    int *arr=(int*)malloc(prefSize*sizeof(int));
    /** It is given that series of xor operation of resultant array gives the ith element in given array.
      * The process can be reversed with the same xor operation to find the ith element of arr that satisfies the given array **/
    arr[0] = pref[0];
    for (int i=1; i < prefSize; i++) {
        arr[i] = pref[i-1] ^ pref[i];
    }
    return arr;
}
