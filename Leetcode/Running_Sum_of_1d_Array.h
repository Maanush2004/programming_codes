/** Leetcode 1480. Running Sum of 1d Array
  * Difficulty : Easy
  * https://leetcode.com/problems/running-sum-of-1d-array **/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// Function to return running sum of given array
int* runningSum(int* nums, int numsSize, int* returnSize){
    // As the array to be returned is of same size, the returnsize is same
    *returnSize = numsSize;
    // Declaring and allocating space for running_sum pointer
    int *running_sum=(int*)malloc(numsSize*sizeof(int));
    // The initital element of running sum would be the same as in the original array.
    running_sum[0] = nums[0];
    // The ith element in running_sum array is obtained by adding ith element in num array and (i-1)th array in running_sum array
    for (int i=1; i< numsSize; i++) {
        running_sum[i] = nums[i] + running_sum[i-1];
    }
    return running_sum;
