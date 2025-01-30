// 1679. Max Number of K-Sum Pairs

// You are given an integer array nums and an integer k.
// In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.
// Return the maximum number of operations you can perform on the array.

// Example 1:
// Input: nums = [1,2,3,4], k = 5
// Output: 2
// Explanation: Starting with nums = [1,2,3,4]:
// - Remove numbers 1 and 4, then nums = [2,3]
// - Remove numbers 2 and 3, then nums = []
// There are no more pairs that sum up to 5, hence a total of 2 operations.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int count = 0;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum == k) {
                count++;
                l++;
                r--;
            } else if (sum < k) {
                l++;
            } else {
                r--;
            }
        }
        return count;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3,1,3,4,3};
    int k = 6;
    cout << "Input: nums = [";
    for(int i = 0; i < nums.size(); i++){
        cout << " " << nums[i];
    }
    cout << "], k = " << k;
    cout << "\nOutput: " << obj.maxOperations(nums, k);
    return 0;
}