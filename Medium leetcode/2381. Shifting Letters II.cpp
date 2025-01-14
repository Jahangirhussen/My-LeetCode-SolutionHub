#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts)
    {
        int currentShift = 0;
        vector<int> shiftTimeline(s.length() + 1);

        for (vector<int>& x : shifts)
        {
            int start = x[0];
            int finish  = x[1];
            int dec = x[2] ? 1 : -1;

            shiftTimeline[start] = shiftTimeline[start] + dec;
            shiftTimeline[finish  + 1] = shiftTimeline[finish  + 1] - dec;
        }

        for (int i = 0; i < s.length(); ++i)
        {
            currentShift = (currentShift + shiftTimeline[i]) % 26;
            s[i] = 'a' +   (s[i] - 'a' + currentShift + 26) % 26;

        }

        return s;
    }
};


/*
class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts)
    {
        for (auto x : shifts)
        {
            int start = x[0], finish = x[1], dec = x[2];

            for (int i = start; i <= finish; i++)
            {
                if (dec == 0)
                {
                    s[i] = (s[i] == 'a') ? 'z' : s[i] - 1;
                }
                else if (dec == 1)
                {
                    s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;
                }
            }
        }

        return s;
    }
};
*/

/*
class Solution

{
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts)
    {
        for (auto x : shifts)
        {
            int start = x[0], finish = x[1], dec = x[2];

            for (int i = start; i <= finish; i++)
            {
                if (dec == 0)
                {
                    s[i] = (s[i] == 'a') ? 'z' : s[i] - 1;
                }
                else if (dec == 1)
                {
                    s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;
                }
            }
        }

        return s;
    }
};
*/


int main()
{
    Solution ob1;

    string s = "abc";
    vector<vector<int>> shifts = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};
    string result = ob1.shiftingLetters(s, shifts);
    cout << result << endl;  // "ace"

    s = "dztz";
    shifts = {{0, 0, 0}, {1, 1, 1}};
    result = ob1.shiftingLetters(s, shifts);
    cout << result << endl;  // "catz"

    return 0;
}
