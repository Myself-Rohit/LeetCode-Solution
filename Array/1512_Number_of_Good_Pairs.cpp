// 1512. Number of Good Pairs
// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

// Example 1:
// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum =0;
        for(int i=0; i<nums.size(); i++){
           sum += mp[nums[i]]++;
        }
        return sum;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,1,1};
    cout << "Input: nums = [";
    for(int i = 0; i < nums.size(); i++){
        cout << " " << nums[i];
    }
    cout << "]\nOutput: " << obj.numIdenticalPairs(nums);
    return 0;
}
