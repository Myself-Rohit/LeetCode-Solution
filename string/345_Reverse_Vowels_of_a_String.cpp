// 345. Reverse Vowels of a String

// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

// Example 1:
// Input: s = "IceCreAm"
// Output: "AceCreIm"

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    string reverseVowels(string s) {
        int n = s.size();
        int start = 0, end = n - 1;
        while (start < end) {
            if (isVowel(s[start]) && isVowel(s[end])) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            if (!isVowel(s[start])) {
                start++;
            }
            if (!isVowel(s[end])) {
                end--;
            }
        }
        return s;
    }
};

int main(){
    string s = "leetcode";
    Solution obj;
    cout<<"Input: "<<s;
    string str =obj.reverseVowels(s);
    cout<<"\nOutput: "<<str;
    return 0;
}