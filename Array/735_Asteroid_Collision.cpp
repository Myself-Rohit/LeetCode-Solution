// 735. Asteroid Collision

// We are given an array asteroids of integers representing asteroids in a row. The indices of the asteriod in the array represent their relative position in space.

// For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

// Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

// Example 1:
// Input: asteroids = [5,10,-5]
// Output: [5,10]
// Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n = asteroids.size();
        for (int i = 0; i < n; i++) {
             if (asteroids[i] < 0 && ans.size() && ans[ans.size()-1] > 0) {
                int s1 = abs(ans[ans.size()-1]);
                int s2 = abs(asteroids[i]);
                if (s1 < s2){
                    ans.pop_back();
                    i--;
                }else if(s1 == s2){
                     ans.pop_back();
                }
            }else {
                ans.push_back(asteroids[i]);
            } 
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> asteroids = {10,2,-5};
    vector<int> ans;
    ans = obj.asteroidCollision(asteroids);
    cout << "Input: asteroids = [";
    for(int i = 0; i < asteroids.size(); i++){
        cout << " " << asteroids[i];
    }
    
    cout << "]\nOutput: [";
     for(int i = 0; i < ans.size(); i++){
        cout << " " << ans[i];
    }
    cout << "]";
    return 0;
}
