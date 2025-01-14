class Solution {
public:
    int hIndex(vector<int>& citations) {
        int left = 0, right = citations.size() - 1;
        int n = citations.size();

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (citations[mid] >= n - mid) {
                right = mid - 1;  // move left
            } else {
                left = mid + 1;  // move right
            }
        }
        return n - left;  // The h-index
    }
};
/*
class Solution
{
public:
    int hIndex(vector<int>& citations)
    {
        sort(citations.rbegin(), citations.rend());
        int h_index = 0;
        for (int i = 0; i < citations.size(); i++)
        {
            if (i + 1 <= citations[i])
            {
                h_index = i + 1;
            }
            else
            {
                break;
            }
        }
        return h_index;
    }
};
*/
