#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int n = boxes.length();
        vector<int> left(n, 0), right(n, 0), answer(n, 0);

        int count = 0, leftOps = 0;
        for (int i = 1; i < n; ++i)
        {
            if (boxes[i - 1] == '1')
            {
                count++;
            }
            leftOps = leftOps + count;
            left[i] = leftOps;
        }

        count = 0;
        int rightOps = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            if (boxes[i + 1] == '1')
            {
                count++;
            }
            rightOps = rightOps + count;
            right[i] = rightOps;
        }

        for (int i = 0; i < n; ++i)
        {
            answer[i] = left[i] + right[i];
        }

        return answer;
    }
};

int main()
{
    Solution solution;
    string boxes = "110";
    vector<int> result = solution.minOperations(boxes);

    cout << "Answer: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int n = boxes.length();
        vector<int> left(n, 0), right(n, 0), answer(n, 0);

        int count = 0, leftOps = 0;
        for (int i = 1; i < n; ++i)
        {
            if (boxes[i - 1] == '1')
            {
                count++;
            }
            leftOps += count;
            left[i] = leftOps;
        }


        count = 0;
        int  rightOps = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            if (boxes[i + 1] == '1')
            {
                count++;
            }
            rightOps += count;
            right[i] = rightOps;
        }



        for (int i = 0; i < n; ++i)
        {
            answer[i] = left[i] + right[i];
        }

        return answer;
    }
};
*/
