#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool checkTwoChessboards(string square1, string square2)
    {
        int sum1 = (square1[0] - 'a' + 1) + (square1[1] - '0');
        int sum2 = (square2[0] - 'a' + 1) + (square2[1] - '0');

        return (sum1 % 2) == (sum2 % 2);
    }
};

int main()
{
    Solution solution;

    string square1_test1 = "a1", square2_test1 = "c3";
    string square1_test2 = "a1", square2_test2 = "h3";

    cout << "Input: " << square1_test1 << ", " << square2_test1
         << " -> Output: " << (solution.checkTwoChessboards(square1_test1, square2_test1) ? "true" : "false") << endl;

    cout << "Input: " << square1_test2 << ", " <<
