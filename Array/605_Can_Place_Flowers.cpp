// 605. Can Place Flowers

// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// Example 1:
// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        int c = 0;

        for (int i = 0; i < len; i++) {
            if ((i == 0 || !flowerbed[i - 1]) && !flowerbed[i] &&
                (i == len - 1 || !flowerbed[i + 1])) {
                flowerbed[i] = 1;
                c++;
                if (c >= n) {
                    return true;
                }
            }
        }
        return c >= n;
    }
};

int main(){
    Solution obj;
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;
    bool result = obj.canPlaceFlowers(flowerbed,n);
    cout<<result;
    return 0;
}