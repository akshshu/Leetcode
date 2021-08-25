
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<string, bool> dict;
    unordered_map<string, bool> dict2;
    bool recurs(int i, string &s, int &endindex)
    {
        if (i == endindex)
            return true;
        string pq = to_string(i) + "$" + to_string(endindex);
        if (dict2.find(pq) != dict2.end())
        {
            return dict2[pq];
        }
        dict2[pq] = false;
        bool temp = false;

        string x = "";
        for (int j = i; j < endindex; j++)
        {
            x += s[j];
            if (dict.find(x) != dict.end())
            {
                temp = true;
                temp = (temp and recurs(j + 1, s, endindex));
            }
            dict2[pq] = dict2[pq] || temp;
        }
        return dict2[pq];
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        for (string x : wordDict)
            dict[x] = true;
        int endIndex = s.size();
        return recurs(0, s, endIndex);
    }
};
int main()
{
    Solution s;
    string ss = "catsandog";
    vector<string> wordDict = {"cats", "dog", "sand", "and", "cat"};
    auto ans = s.wordBreak(ss, wordDict);
    return 0;
}
