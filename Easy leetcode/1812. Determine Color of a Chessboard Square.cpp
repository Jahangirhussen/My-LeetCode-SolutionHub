#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int column = coordinates[0] - 'a' + 1;
        int row = coordinates[1] - '0';
        return (column + row) % 2 != 0;
    }
};

int main()
{
    Solution solution;

    string test1 = "a1";
    string test2 = "h3";
    string test3 = "c7";

    cout << "Input: " << test1 << " -> Output: " << (solution.squareIsWhite(test1) ? "true" : "false") << endl;
    cout << "Input: " << test2 << " -> Output: " << (solution.squareIsWhite(test2) ? "true" : "false") << endl;
    cout << "Input: " << test3 << " -> Output: " << (solution.squareIsWhite(test3) ? "true" : "false") << endl;

    return 0;
}

