// 151. Reverse Words in a String

// Given an input string s, reverse the order of the words.
// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

// Example 1:
// Input: s = "the sky is blue"
// Output: "blue is sky the"

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string word = "";
        vector<string> v;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                if (word != "") {
                    v.push_back(word);
                    word = "";
                }
                while (i <= n && s[i] == ' ') {
                    i++;
                }
                i--;
            } else {
                word += s[i];
            }
        }
        if (word != "") {
            v.push_back(word);
            word = "";
        }
        for (int j = v.size() - 1; j >= 0; j--) {
            word += v[j];
            if (j != 0) {
                word += ' ';
            }
        }
        return word;
    }
};

int main(){
    Solution obj;
    string s = "  hello world  ";
    string revStr = obj.reverseWords(s);
    cout << revStr;
    return 0;
}