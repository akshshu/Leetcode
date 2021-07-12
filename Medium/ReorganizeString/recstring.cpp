
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reorganizeString(string s)
    {
        sort(s.begin(), s.end());
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < s.size(); i++)
        {
            char x = s[i];
            int count = 0;
            while (i < s.size() and x == s[i])
            {
                i++;
                count++;
            }
            i--;
            pq.push({count, x});
        }
        if (pq.size() == 1 && pq.top().first > 1)
            return "";

        string sp = "";
        while (pq.size() >= 2)
        {
            auto x = pq.top();
            int freq1 = x.first;
            char ch1 = x.second;
            sp += ch1;
            freq1--;
            pq.pop();
            x = pq.top();
            int freq2 = x.first;
            char ch2 = x.second;
            sp += ch2;
            freq2--;
            pq.pop();
            if (freq1)
                pq.push({freq1, ch1});
            if (freq2)
                pq.push({freq2, ch2});
        }
        if (pq.size() == 0)
            return sp;
        if (pq.top().first > 1)
            return "";
        if (pq.top().first == 1 and sp.size() > 1 and sp[sp.size() - 1] == pq.top().second)
            return "";
        return sp + pq.top().second;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
