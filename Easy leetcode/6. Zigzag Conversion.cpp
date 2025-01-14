#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1 || numRows >= s.size())
        {
            return s;
        }

        vector<string> v(numRows, "");

        int current_row = 0;
        bool goingDown = false;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            v[current_row] += c;

            if (current_row == 0 || current_row == numRows - 1)
            {
                goingDown =    !goingDown;
            }

            if (goingDown)
            {
                current_row++;
            }
            else
            {
                current_row--;
            }
        }

        string result = "";
        for (string row : v)
        {
            result += row;
        }

        return result;
    }
};

int main()
{
    Solution obj;
    string s;
    int numRows;

    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    cout << obj.convert(s, numRows) << endl;

    return 0;
}
