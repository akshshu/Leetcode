
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSentenceSimilarity(vector<string> &words1, vector<string> &words2, vector<vector<string>> &pairs)
    {
        // write your code here
        if (words1.size() != words2.size())
            return false;
        unordered_map<string, unordered_set<string>> mp;
        int count = 1;
        for (auto pair : pairs)
        {
            mp[pair[0]].insert(pair[1]);
            mp[pair[1]].insert(pair[0]);
        }
        int i = 0;
        while (i < words1.size())
        {
            if (words1[i] == words2[i])
                continue;
            if (mp[words1[i]].find(words2[i]) == mp[words1[i]].end())
                return false;
            i++;
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
