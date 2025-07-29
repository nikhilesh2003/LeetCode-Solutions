/*
 * Title: Leetcode 2210 - Count Hills and Valleys in an Array
 * Description: code developed by Bandi Nikhilesh Reddy Explanation and comments generated with the help of ChatGPT
 *
 * Problem Link: https://leetcode.com/problems/count-hills-and-valleys-in-an-array/
 *
 * Approach:
 * 1. Remove adjacent duplicates to avoid miscounting.
 * 2. Traverse the filtered array and count:
 *      - Hill: nums[i] > nums[i-1] && nums[i] > nums[i+1]
 *      - Valley: nums[i] < nums[i-1] && nums[i] < nums[i+1]
 */

int countHillValley(int* nums, int numsSize) {
    int filter[numsSize];  // Temporary array to store filtered values
    int j = 1, count = 0;

    // Step 1: Filter out adjacent duplicates
    filter[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            filter[j] = nums[i];
            j++;
        }
    }

    // Step 2: Count hills and valleys
    for (int i = 1; i < j - 1; i++) {
        if ((filter[i] > filter[i - 1] && filter[i] > filter[i + 1]) ||
            (filter[i] < filter[i - 1] && filter[i] < filter[i + 1])) {
            count++;
        }
    }

    return count;
}
