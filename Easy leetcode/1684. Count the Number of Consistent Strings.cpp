#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string>& words)
    {
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());
        int count = 0;

        for (const string& word : words)
        {
            bool isConsistent = true;
            for (char c : word)
            {
                if (allowedSet.find(c) == allowedSet.end())   // অক্ষর allowed-এ নেই
                {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) count++;
        }

        return count;
    }
};

//একটি স্ট্রিং consistent হবে যদি সেই স্ট্রিং-এর সব অক্ষর allowed স্ট্রিং-এ উপস্থিত থাকে। এরপর, consistent স্ট্রিং-এর সংখ্যা রিটার্ন করতে হবে।
int main()
{
    Solution ob1;

    string allowed = "abc";
    vector<string> words = {"a","b","c","ab","ac","bc","abc"};
    cout <<ob1. countConsistentStrings(allowed, words) << endl;
    return 0;
}

