#include <iostream>
using namespace std;

class Solution
{
public:
    int distMoney(int money, int children)
    {
        if (money < children) return -1;
        if (money == children * 8) return children;
        if (money > children * 8) return children - 1;

        money= money - children;
        int ans = money / 7;
        int rem = money % 7;
        children =children- ans;

        if (rem == 3 && children == 1) ans--;
        return ans;
    }
};


int main()
{
    Solution sol;
    int money, children;
    cin >> money >> children;
    cout << sol.distMoney(money, children) << endl;
    return 0;
}
