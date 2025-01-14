#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
///NEED to Know HEAP
class Solution
{
public:
    long long findScore(vector<int>& nums)
    {
        int size = nums.size();
        vector<bool> visited(size, false); // To track if an element is visited
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap; // Min-heap to store the elements along with their indices

        // Populate the min-heap with elements and their indices
        for (int i = 0; i < size; ++i)
        {
            min_heap.push({nums[i], i});
        }

        long long score = 0;
        // Process the elements in the min-heap
        while (!min_heap.empty())
        {
            auto [value, index] = min_heap.top(); // Get the smallest element and its index
            min_heap.pop();

            // Skip the element if it has already been visited
            if (visited[index])
            {
                continue;
            }

            // Add the value to the score
            score += value;
            visited[index] = true; // Mark the element as visited

            // Mark adjacent elements as visited
            if (index + 1 < size)
            {
                visited[index + 1] = true;
            }
            if (index - 1 >= 0)
            {
                visited[index - 1] = true;
            }
        }

        return score;
    }
};



int main()
{
    Solution ob1;
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << ob1.findScore(nums) << endl;

    return 0;
}
/*

class Solution
{
public:
    long long findScore(vector<int>& nums)
    {
        long long score = 0;
        while (!nums.empty())
        {
            int small = -1;
            for (int i = 0; i < nums.size(); i++)
            {
                if (small == -1 || nums[i] < nums[small])
                {
                    small = i;
                }
            }
            score += nums[small];

            nums[small] = INT_MAX;
            if (small - 1 >= 0)
            {
                nums[small - 1] = INT_MAX;
            }
            if (small + 1 < nums.size())
            {
                nums[small + 1] = INT_MAX;
            }

            // Remove all marked elements
            nums.erase(remove(nums.begin(), nums.end(), INT_MAX), nums.end());
        }
        return score;
    }
};

*/
