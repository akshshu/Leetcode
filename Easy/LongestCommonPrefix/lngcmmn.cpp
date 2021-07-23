
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        for (auto x : strs)
            if (x == "")
                return "";
        string ans = "";
        for (int i = 0; i <= 200; i++)
        {
            if (i > strs[0].size() - 1)
                return ans;
            char prev = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (i > strs[j].size() - 1 || prev != strs[j][i])
                    return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
