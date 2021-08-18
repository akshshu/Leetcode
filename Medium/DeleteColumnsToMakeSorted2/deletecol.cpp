
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int s_size = strs[0].size();
        string s = strs[0];
        int alreadySorted = 1;
        for (int i = 1; i < strs.size(); i++)
        {
            if (strs[i] < s)
            {
                alreadySorted = 0;
                break;
            }
            s = strs[i];
        }
        if (alreadySorted)
            return 0;
        vector<string> longstring(strs.size(), "");
        for (int i = 0; i < strs[0].size(); i++)
        {
            longstring[0] += strs[0][i];
            int mistake = 0;
            for (int j = 1; j < strs.size(); j++)
            {
                longstring[j] += strs[j][i];
                if (longstring[j] < longstring[j - 1])
                {
                    mistake = j;
                    break;
                }
            }
            if (mistake)
            {
                while (mistake >= 0)
                {
                    longstring[mistake].pop_back();
                    mistake--;
                }
            }
        }

        return strs[0].size() - longstring[0].size();
    }
};
int main()
{
    Solution s;
    vector<string> strs = {"ca", "bb", "ac"};
    auto ans = s.minDeletionSize(strs);
    return 0;
}
