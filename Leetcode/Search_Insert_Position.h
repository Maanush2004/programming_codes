/** Leetcode 35. Search Insert Position
  * Difficulty : Easy
  * https://leetcode.com/problems/search-insert-position **/

/** Function to find the index of a number in array or return the index such that
  * when the number is inserted there, ascending order is maintained **/
int searchInsert(int* nums, int numsSize, int target){
    int i;
    // Looping through all elements
    for (i=0; i < numsSize; i++) {
        /** If the number in this index is equal or greater than target, break the loop.
          * It is obvious when the number is equal.
          * If the number is greater then the target is placed in this index and all the following elements are pushed back. **/
        if (nums[i]>=target) {
            break;
        }
    }
    return i;
}
