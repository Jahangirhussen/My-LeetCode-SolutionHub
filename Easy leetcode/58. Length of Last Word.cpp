#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int char_count = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ') char_count++;
            else if (char_count > 0) return char_count;
        }
        return char_count;
    }
};


/*class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int char_count=0,space=s.size()-1;
         for(int i=s.size()-1;i>=0;i--)/// "   fly me   to   the moon  "
        {
            if(s[i]==' ')space--;
            else break;
        }

        for(int i=space;i>=0;i--)
        {
            if(s[i]!=' ')char_count++;
            else return char_count;
        }
   return char_count;

    }
};
*/
int main()
{
    Solution sol;
    string s = "   fly me   to   the moonia      ";
    cout << "Length of the last word: " << sol.lengthOfLastWord(s) << endl;
    return 0;
}
