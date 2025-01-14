/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   :leetcode
Problem Name   :two-sum
Difficulty     :easy
Problem Link   :https://leetcode.com/problems/two-sum/
STATUS         : Accepted
Problem Logic  :
Problem Task   :
**/
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;  // Negative numbers are not palindromes
        int original = x, reversed = 0;
        while (x > 0)
        {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return original == reversed;
    }
};
/*
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        return s == string(s.rbegin(), s.rend());
    }
};
*/
