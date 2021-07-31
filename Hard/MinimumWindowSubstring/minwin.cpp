
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        int n = s.size();
        if (n < t.size())
            return "";
        unordered_map<char, int> mp;
        unordered_map<char, int> mp2;
        int matchCount = t.size();
        for (char x : t)
            mp2[x]++;
        int i = 0;
        int startPoint = 0, endPoint = 0;
        while (matchCount > 0 && i < n)
        {
            if (mp2[s[i]])
            {
                mp[s[i]]++;
                if (mp[s[i]] <= mp2[s[i]])
                    matchCount--;
            }
            i++;
        }
        if (matchCount == 0)
            endPoint = i - 1;
        else
            return "";
        int k = 0;
        while (k < n)
        {
            if (mp2[s[k]])
            {
                mp[s[k]]--;
                if (mp[s[k]] < mp2[s[k]])
                {
                    mp[s[k]]++;
                    startPoint = k;
                    break;
                }
            }
            k++;
        }
        int minLen = endPoint - startPoint + 1;
        k = startPoint;
        for (int j = i; j < n; j++)
        {

            if (mp2[s[k]])
            {
                mp[s[k]]--;
                if (mp[s[k]] < mp2[s[k]])
                    matchCount++;
            }
            if (mp2[s[j]])
            {
                mp[s[j]]++;
                if (mp[s[j]] <= mp2[s[j]])
                    matchCount--;
            }
            if (matchCount == 0)
            {
                while (k < n)
                {
                    k++;
                    if (mp2[s[k]])
                    {
                        mp[s[k]]--;
                        if (mp[s[k]] < mp2[s[k]])
                        {
                            matchCount++;
                            break;
                        }
                    }
                }
                if (j - k + 1 < minLen)
                {
                    startPoint = k;
                    endPoint = j;
                }
            }
            k++;
        }
        string ans = "";
        for (int i = startPoint; i <= endPoint; i++)
            ans += s[i];
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
