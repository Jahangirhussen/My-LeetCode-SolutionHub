#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int max_area = 0;
        int i = 0, j = height.size() - 1;

        while (i < j)
        {
            int y = min(height[i], height[j]);
            int x = j - i;
            max_area = max(max_area, y * x);

            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max_area;
    }
};

/*
/// runtime =O(n*n),maybe get an runtime error maybe not
class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int max_area = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int y = min(height[i], height[j]);
                int x =j-i;
                max_area = max(max_area,(y*x) );
            }
        }
        return max_area;
    }
};
*/

int main()
{
    Solution ob1;

    vector<int> height1 = {1,8,6,2,5,4,8,3,7};
    cout <<ob1.maxArea(height1)<<endl;
    vector<int> height2 = {1, 2, 3, 4};
    cout <<ob1.maxArea(height2)<<endl;



    return 0;
}

