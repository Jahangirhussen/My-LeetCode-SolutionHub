#include <iostream>
using namespace std;
class Solution
{
public:
    int minPartitions(string n)
    {
        int big_digit = 0;
        for (char c : n)
        {
            big_digit = max(big_digit, c - '0');
            if (big_digit == 9) break;
        }
        return big_digit;
    }
};


int main()
{
    Solution obj;
    string n;
    cin >> n;
    cout << obj.minPartitions(n) << endl;
    return 0;
}
/*input
      3  2
      1  1
      1  1
      1  0
--------------------- max digit 3 so need can see 11+11+10 = 3 value is ==32
input
      8  2  7  3  4
      1  1  1  1  1
      1  1  1  1  1
      1  0  1  1  1
      1  0  1  0  1
      1  0  1  0  0
      1  0  1  0  0
      1  0  1  0  0
      1  0  0  0  0

--------------------- max digit 8 so need can see 11111+ 11111+ 10111 + 10101 +10100 +10100 +10100 +10000 8 value==82734
input
      2  7  3  4  6  2  0  9  8  3  0  7  0  9  1  8  2  3  4  6
      1  1  1  1  1  1  0  1  8  1  0  1  0  1  1  8  1  1  1  1
      1  1  1  1  1  1  0  1  8  1  0  1  0  1  1  8  1  1  1  1
      0  1  1  1  1  0  0  1  8  1  0  1  0  1  1  8  0  1  1  1
      0  1  0  1  1  0  0  1  8  0  0  1  0  1  1  8  0  0  1  1
      0  1  0  0  1  0  0  1  8  0  0  1  0  1  1  8  0  0  0  1
      0  1  0  0  1  0  0  1  8  0  0  1  0  1  1  8  0  0  0  1
      0  1  0  0  0  0  0  1  8  0  0  1  0  1  1  8  0  0  0  0
      0  0  0  0  0  0  0  1  8  0  0  0  0  1  1  8  0  0  0  0
      0  0  0  0  0  0  0  1  8  0  0  0  0  1  1  8  0  0  0  0
-------------------------------------------------------------------max digit 9 so need can see total 9 value of sum is==27346209830709182346


*/
