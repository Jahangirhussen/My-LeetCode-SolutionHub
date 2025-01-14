#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> stableMountains(vector<int>& height, int threshold)
    {
        vector<int>x;
        for(int i=1; i<height.size(); i++)
        {
            if(height[i-1]> threshold)x.push_back(i);
        }
        return x;
    }
};

int main()
{
    Solution Solution;
    vector<int> height(5);
    int threshold;
    for(int i=0;i<5;i++)
    {
        cin>>height[i];
    }
    cin>> threshold;

    vector<int> result = Solution.stableMountains( height,  threshold);
        for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

