#include <iostream>
using namespace std;
class Solution
{
public:
    int numberOfMatches(int n)
    {

        return n-1;
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;
    cout << obj.numberOfMatches(n) << endl;
    return 0;
}

