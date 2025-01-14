#include <iostream>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum=0,mul=1;
        while(n>0)
        {
            sum =sum + (n % 10);
            mul =mul * (n % 10);
            n /= 10;
        }
        return mul-sum;
    }
};

int main()
{
    Solution Solution;
    int n;
    cin >> n;
    cout << Solution.subtractProductAndSum(n) << endl;
    return 0;
}

