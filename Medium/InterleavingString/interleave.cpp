
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<string, bool> mp;
    bool recurs(string &s1, string &s2, string &s3, int l1, int l2, int l3, int i, int j, int k)
    {
        if (k == l3)
            return (i == l1 and j == l2) ? true : false;
        string key = to_string(i) + "#" + to_string(j) + "#" + to_string(k);
        if (mp.find(key) != mp.end())
            return mp[key];
        if (l2 == j)
            return mp[key] = (s1.substr(i) == s3.substr(k)) ? true : false;
        if (l1 == i)
            return mp[key] = (s2.substr(j) == s3.substr(k)) ? true : false;
        bool first = false, second = false;
        if (s1[i] == s3[k])
            first = recurs(s1, s2, s3, l1, l2, l3, i + 1, j, k + 1);
        if (s2[j] == s3[k])
            second = recurs(s1, s2, s3, l1, l2, l3, i, j + 1, k + 1);
        return mp[key] = first or second;
    }
    bool isInterleave(string s1, string s2, string s3)
    {

        int l1 = s1.size();
        int l2 = s2.size();
        int l3 = s3.size();
        if (l3 != l1 + l2)
            return false;
        return recurs(s1, s2, s3, l1, l2, l3, 0, 0, 0);
    }
};
int main()
{
    Solution s;
    string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
    auto ans = s.isInterleave(s1, s2, s3);
    return 0;
}
