/** Leetcode 2605. Form Smallest Number From Two Digit Arrays
  * Difficulty : Easy
  * https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays **/

int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int s_1=0,s_2=0;
    for (int i=0;i<nums1Size;i++) {
        if (nums1[i] > s_1) {
            s_1 = nums1[i];
        }
    }
    for (int i=0;i<nums1Size;i++) {
        if (nums1[i] < s_1) {
            s_1 = nums1[i];
        }
    }
    for (int i=0;i<nums2Size;i++) {
        if (nums2[i] > s_2) {
            s_2 = nums2[i];
        }
    }
    int s_2_max = s_2;
    int s_2_temp = s_2;
    for (int i=0;i<nums2Size;i++) {
        for (int j=0;j<nums1Size;j++) {
            if (nums2[i]==nums1[j] && s_2_temp > nums2[i]) {
                s_2_temp = nums2[i];
            }
        }
        if (nums2[i] < s_2) {
            s_2 = nums2[i];
        }
    }
    int exist = 0;
    for (int i=0; i < nums1Size; i++) {
        if (nums1[i]==s_2_temp) {
            exist = 1;
        } 
    }
    for (int i=0; i < nums2Size; i++) {
        if (nums2[i]==s_2_temp) {
            exist *= 1;
        } 
    }
    if (exist != 0) {
        return s_2_temp;
    }
    if (s_1 > s_2) {
        return s_2*10+s_1;
    } else {
        return s_1*10+s_2;
    }
}
