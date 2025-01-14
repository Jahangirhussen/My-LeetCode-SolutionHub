#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int balance = 0, count = 0;
        for (char c : s)
        {
            if(c == 'R')
            {
                balance= balance + 1;
            }
            else // (c=='L')
            {
                balance= balance -1;
            }
            if (balance == 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution solution;
    string s1 = "RLRRLLRLRL";
    string s2 = "RLRRRLLRLL";
    string s3 = "LLLLRRRR";

    cout << "Input: " << s1 << ", Output: " << solution.balancedStringSplit(s1) << endl;
    cout << "Input: " << s2 << ", Output: " << solution.balancedStringSplit(s2) << endl;
    cout << "Input: " << s3 << ", Output: " << solution.balancedStringSplit(s3) << endl;

    return 0; // প্রোগ্রাম শেষ
}

