/*
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to
    target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.


    Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Output: Because nums[0] + nums[1] == 9, we return [0, 1].


 */

#include <stdio.h>
#include <stdlib.h>

int* twoSum( int* nums, int numsSize, int target ){
    int i, j;
    int* out = (int *) malloc(2 * sizeof(int));

    for (i = 0; i < numsSize-1; i++){
        for (j = i + 1; j < numsSize; j++){
            if ( nums[j] == target - nums[i]) {
                out[0] = nums[i];
                out[1] = nums[j];
                return out;
            }
        }
    }
}

int main() {

    int nums[] = { 2, 7, 11, 15 };
    int target = 9;
    int numsSize = sizeof (nums) / sizeof (int);

    int* output = twoSum(nums, numsSize, target);

    printf("[%i, %i]", *output, *(output + 1));
    free(output);

    return 0;
}
