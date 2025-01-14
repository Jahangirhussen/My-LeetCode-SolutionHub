class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target)
    {
        int count = 0;
        for (int x : hours)
        {
            if (x >= target)
            {
                count++;
            }
        }
        return count;
    }
};
