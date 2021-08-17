
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> mp;
        vector<string> ans;
        if (s.size() < 10)
            return ans;
        for (int i = 0; i <= s.size() - 10; i++)
        {
            string temp = s.substr(i, 10);
            if (mp[temp] < 2)
            {
                mp[temp]++;
                if (mp[temp] == 2)
                    ans.push_back(temp);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    string s2 = "AAAAAAAGCCCCC";
    auto ans = s.findRepeatedDnaSequences(s2);
    return 0;
}
