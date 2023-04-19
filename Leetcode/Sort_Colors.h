/** Leetcode 75. Sort Colors
  * Difficulty : Medium
  * https://leetcode.com/problems/sort-colors **/

// Function to sort the colors in an array
void sortColors(int* nums, int numsSize){
    int temp;
    /** It is given that colors are to be in the order of red, white and blue which are represented by
      * 0, 1 and 2 respectively. They are supposed to be in order and also adjacent to each other.
      * This basically means that the given array should be arranged ascendingly by which
      * all the given conditions get satisfied **/
    for (int i=0; i < numsSize; i++) {
        for (int j=i+1; j < numsSize; j++) {
            if (nums[i]>nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
