class Solution
{
public:
    long long calculateScore(string s)
    {
        unordered_map<char, char> mirror;
        for (char c = 'a'; c <= 'z'; ++c)
        {
            mirror[c] = 'z' - (c - 'a');
        }

        unordered_map<char, vector<int>> indexMap;
        long long score = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            char mirroredChar = mirror[s[i]];

            if (!indexMap[mirroredChar].empty())
            {
                int index = indexMap[mirroredChar].back();
                indexMap[mirroredChar].pop_back();
                score += (i - index);
            }
            else
            {
                indexMap[s[i]].push_back(i);
            }
        }

        return score;
    }
};

