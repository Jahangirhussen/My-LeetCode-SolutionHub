#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int sumOfDivisibles(int n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        return sum;
    }
};

int main() {
    Solution ob1;
    long long t;

    cin >> t;

    cout << ob1.sumOfDivisibles(t) << endl;

    return 0;
}
