/**
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string tmp = to_string(x);
        bool dif = false;
        int i = 0;
        while(tmp.length()>1 && !dif){
            if(tmp[i] != tmp[tmp.length()-1])
                dif = true;
            tmp = tmp.substr(1,tmp.length()-1);
            tmp.pop_back();
        }
        return !dif;
    }
};