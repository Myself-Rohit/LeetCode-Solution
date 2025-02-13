// 724. Find Pivot Index

// Given an array of integers nums, calculate the pivot index of this array.
// The pivot index is the index where the sum of all the numbers strictly to the
// left of the index is equal to the sum of all the numbers strictly to the
// index's right.

// If the index is on the left edge of the array, then the left sum is 0 because
// there are no elements to the left. This also applies to the right edge of the
// array.

// Return the leftmost pivot index. If no such index exists, return -1.

// Example 1:
// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int l = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0)
                l += nums[i - 1];
            sum -= nums[i];
            if (l == sum) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Input: nums = [";
    for (int i = 0; i < nums.size(); i++) {
        cout << " ," << nums[i];
    }
    cout << "]\nOutput: " << obj.pivotIndex(nums);
    return 0;
}
