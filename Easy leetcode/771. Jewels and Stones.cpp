#include <iostream>
#include <unordered_set>

using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char>jew_set(jewels.begin(),jewels.end());
        int count=0;
        for(auto x : stones)
        {
         if(jew_set.find(x)!=jew_set.end())
         {
             count++;
         }
        }
return count;
    }
};


int main()
{
    Solution Solution;
    string jewels,stones;
    cin >> jewels>>stones;
    cout << Solution.numJewelsInStones( jewels,  stones)<< endl;
    return 0;
}

/*
if (jew_set.find(x) != jew_set.end())
চেক করা হচ্ছে, বর্তমান অক্ষর (x) jew_set-এ আছে কিনা।
jew_set.find(x)
যদি x সেটে থাকে, এটি jew_set.end() এর সমান হবে না।
*/
