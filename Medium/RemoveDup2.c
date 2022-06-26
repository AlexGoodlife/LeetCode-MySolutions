/*
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. 
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums.
More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Runtime: 18ms | beats 31% of other submissions
Memory Usage: 6.7 MB
*/


#include <stdio.h>
#include <stdlib.h>

int count_while(int*nums, int n,int x){
    int result = 0;
    while(result <n && nums[result] == x)
        result++;
    return result;
}


int removeDuplicates(int* nums, int numsSize){
    if(numsSize ==0)
        return 0;
    int i = 0;
    int result = 0;
    while(i < numsSize){
        int z = count_while(nums+i, numsSize-i,nums[i]);
        if(z>=2){
            nums[result++] = nums[i];
            nums[result++] = nums[i];
        }
        else
            nums[result++] = nums[i];
        i +=z;
    }
    return result;
}


int main(void){
    return 0;
}