class Solution {
public:
   vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
{
    int maxCandies = *max_element(candies.begin(), candies.end());
    vector<bool> result;
    for (int x : candies)
    {
        if (x + extraCandies >= maxCandies)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }

    return result;
}
};
