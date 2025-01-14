#include <iostream>

using namespace std;
class Solution {
public:
int differenceOfSums(int n, int m)
{
int sum=0;
for(int i=1;i<=n;i++)
{
    if(i%m==0)sum=sum-i;
    else sum= sum+i;
}
return sum;
}
};
int main()
{
    Solution Solution;
    int n,m;
    cin >> n>>m;
    cout << Solution.differenceOfSums( n,  m) << endl;
    return 0;
}
/*

    int differenceOfSums(int n, int m)
    {
        int totalSum = n * (n + 1) / 2;
        int k = n / m;
        int sumMultiplesOfM = m * k * (k + 1) / 2;
        int sumNotMultiplesOfM = totalSum - sumMultiplesOfM;
        return sumNotMultiplesOfM - sumMultiplesOfM;
    }
};
*/
