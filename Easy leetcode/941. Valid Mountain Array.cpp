#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int>& arr)
    {
        if (arr.size() < 3) return false;
        int max_val = INT_MIN;
        int index = -1;

        for (int i = 0; i < arr.size(); i++)
        {


            if (arr[i] > max_val)
            {
                max_val = arr[i];
                index = i;
            }
        }
        if( arr[index]==arr[arr.size()-1] || arr[index]==arr[0] )return false;

        for (int i = 0; i < index; i++)
        {
            if (arr[i] >= arr[i + 1]) return false;
        }

        for (int i = index; i < arr.size() - 1; i++)
        {
            if (arr[i] <= arr[i + 1]) return false;
        }

        return true;
    }
};

int main()
{
    Solution ob1;
    vector<int> arr = {9,8,7,6,5,4,3,2,1,0};

    cout << (ob1.validMountainArray(arr) ? "true" : "false") << endl;

    return 0;
}
/*
TYPE 1:

class Solution
{
public:
    bool validMountainArray(vector<int>& arr)
    {
        if (arr.size() < 3) return false;
        int peak = 0;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[peak]) peak = i;
        }

        if (peak == 0 || peak == arr.size() - 1) return false;

        for (int i = 0; i < peak; i++)
            if (arr[i] >= arr[i + 1]) return false;

        for (int i = peak; i < arr.size() - 1; i++)
            if (arr[i] <= arr[i + 1]) return false;

        return true;
    }
};


TYPE 2:
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int>& arr)
    {
        int n = arr.size();
        if (n < 3) return false;

        bool increasing = false, decreasing = false;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1]) return false;

            if (arr[i] > arr[i - 1])
            {
                if (decreasing) return false; // If already decreasing, can't increase again
                increasing = true;
            }
            else
            {
                if (!increasing) return false; // If never increased, invalid mountain
                decreasing = true;
            }
        }

        return increasing && decreasing; // Must increase and then decrease
    }
};

TYPE 3:
class Solution {
 public:
  bool validMountainArray(vector<int>& arr) {
    if (arr.size() < 3)
      return false;

    int left = 0;
    int right = arr.size() - 1;

  while (left + 1 < arr.size() && arr[left] < arr[left + 1])
      ++left;


    while (right > 0 && arr[right] < arr[right - 1])
      --right;


    return left > 0 && right < arr.size() - 1 && left == right;
  }
};


*/
