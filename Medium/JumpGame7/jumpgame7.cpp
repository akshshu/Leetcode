
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canReach(string s, int minJump, int maxJump)
    {
        int len = s.size() - 1;
        queue<int> q;
        q.push(0);
        int i;
        int maxVisit = 0;
        while (!q.empty())
        {
            i = q.front();
            q.pop();
            int start = max(i + minJump, maxVisit);
            for (int j = start; j <= i + maxJump and j < s.size(); j++)
            {
                if (s[j] == '0')
                {
                    q.push(j);
                    if (j == len)
                        return true;
                }
            }
            maxVisit = i + maxJump;
        }
        return false;
    }
};
int main()
{
    Solution s;
    string s1 = "011010";
    int minjump = 2, maxjump = 3;
    auto ans = s.canReach(s1, minjump, maxjump);
    return 0;
}
