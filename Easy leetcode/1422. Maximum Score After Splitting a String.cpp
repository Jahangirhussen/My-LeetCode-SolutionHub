#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxScore(string s)
    {
        int n = s.size();
        int leftZeros = 0, rightOnes = 0;

        for (char c : s)
        {
            if (c == '1') rightOnes++;
        }

        int maxScore = 0;

        // স্ট্রিংটি ট্রাভার্স করে স্কোর হিসাব করা
        for (int i = 0; i < n - 1; ++i)   //  0 1   1   1   0    1
        {
            if (s[i] == '0') leftZeros++;
            else rightOnes--;

            maxScore = max(maxScore, leftZeros + rightOnes);

        }

        return maxScore;
    }
};

int main()
{
    Solution solution;

    string s;
    cout << "Enter the binary string: ";
    cin >> s;

    int result = solution.maxScore(s);
    cout << "Maximum score after splitting the string: " << result << endl;

    return 0;
}

