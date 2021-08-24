
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // unordered_map<string,vector<string>>mp;
    vector<vector<string>> ans;
    void recurs(int i, string rem, vector<string> &res)
    {
        if (i == rem.size())
        {
            ans.push_back(res);
            return;
        }
        for (int j = i; j < rem.size(); j++)
        {
            if (isPalindrome(rem, i, j))
            {
                res.push_back(rem.substr(i, j - i + 1));
                recurs(j + 1, rem, res);
                res.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }

        return true;
    }
    vector<vector<string>> partition(string s)
    {
        vector<string> res;
        recurs(0, s, res);
        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "aab";
    auto ans = s.partition(s1);
    return 0;
}
