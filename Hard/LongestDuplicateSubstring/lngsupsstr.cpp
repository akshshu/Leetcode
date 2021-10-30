
#include <bits/stdc++.h>
using namespace std;
#define prime 10000007
#define prime 10000007
class Solution
{
public:
    vector<int> roll;
    string ans;
    bool find(string &s, int patternlen)
    {
        unordered_map<int, vector<int>> mp;
        int hashkey = 0;
        for (int i = 0; i < patternlen; i++)
            hashkey = (hashkey * 26 + (s[i] - 'a')) % prime;
        mp[hashkey].push_back(0);
        for (int i = patternlen; i < s.size(); i++)
        {
            hashkey = ((hashkey - roll[patternlen - 1] * (s[i - patternlen] - 'a')) % prime + prime) % prime;
            hashkey = (hashkey * 26 + (s[i] - 'a')) % prime;
            if (mp.find(hashkey) != mp.end())
            {
                for (int strStart : mp[hashkey])
                {
                    string temp = s.substr(strStart, patternlen);
                    string curr = s.substr(i - patternlen + 1, patternlen);
                    if (temp == curr)
                    {
                        ans = temp;
                        return true;
                    }
                }
            }
            mp[hashkey].push_back(i - patternlen + 1);
        }
        return false;
    }
    string longestDupSubstring(string s)
    {
        int n = s.size();
        roll.resize(n);
        roll[0] = 1;
        for (int i = 1; i < n; i++)
            roll[i] = (26 * (roll[i - 1])) % prime;
        int start = 1;
        int end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            bool ret = find(s, mid);
            if (ret)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return ans;
    }
};
int main()
{
    string str = "banana";
    Solution s;
    auto ans = s.longestDupSubstring(str);
    return 0;
}
