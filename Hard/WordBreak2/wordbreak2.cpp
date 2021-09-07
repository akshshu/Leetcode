
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<string, int> mp;
    vector<string> ans;
    void recurs(string p, string s, int index)
    {
        if (index == s.size())
        {
            p.pop_back();
            ans.push_back(p);
            return;
        }
        string z = "";
        for (int i = index; i < s.size(); i++)
        {
            z.push_back(s[i]);
            if (mp[z])
                recurs(p + z + " ", s, i + 1);
        }
    }
    vector<string> wordBreak(string s, vector<string> &wordDict)
    {
        for (string x : wordDict)
            mp[x] = 1;
        recurs("", s, 0);
        return ans;
    }
};
int main()
{
    Solution s;
    string s1 = "catsanddog";
    vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};
    auto ans = s.wordBreak(s1, wordDict);
    return 0;
}
