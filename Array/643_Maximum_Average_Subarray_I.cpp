// 643. Maximum Average Subarray I

// You are given an integer array nums consisting of n elements, and an integer k.
// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

// Example 1:
// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        double maxSum = INT_MIN;
        for(int i=0;i<k;i++) {sum+=nums[i];}
        maxSum = sum;
        for(int i = k;i<n;i++){
            sum += nums[i];
            sum -= nums[i-k];
            maxSum = max(maxSum,sum);
        }
        return maxSum / k;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    cout << "Input: nums =";
    for(int i=0;i<nums.size();i++){
        cout << " " << nums[i];
    }
    cout  << ", k = " << k << "\nOutput: " << obj.findMaxAverage(nums, k);
    return 0;
}
