#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int left = 0, right = s.size() - 1;
        string vowels = "aeiouAEIOU";

        while (left < right)
        {
            if (vowels.find(s[left]) != string::npos && vowels.find(s[right]) != string::npos)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else
            {
                if (vowels.find(s[left]) == string::npos) left++;
                if (vowels.find(s[right]) == string::npos) right--;
            }
        }
        return s;
    }
};

int main()
{
    Solution solution;
    string s;

    // Test case 1
    s = "IceCreAm";
    cout << "Input: " << s << endl;
    cout << "Output: " << solution.reverseVowels(s) << endl;

    // Test case 2
    s = "leetcode";
    cout << "Input: " << s << endl;
    cout << "Output: " << solution.reverseVowels(s) << endl;

    return 0;
}
