#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int minimumSum(int num)
    {

    vector<int>x;
    for(int i=0;i<4;i++)
    {
        x.push_back(num%10);
        num=num/10;
    }
    sort(x.begin(),x.end());
    int sum=(x[0]*10)+x[3] + (x[1]*10) +x[2];
    return sum;
    }
};

int main()
{
    Solution Solution;
    int n;
    cin >> n;
    cout << Solution.minimumSum(n) << endl;
    return 0;
}

