
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int openLock(vector<string> &deadends, string target)
    {
        unordered_set<string> st;
        unordered_map<string, int> visited;
        for (string de : deadends)
            st.insert(de);
        queue<string> q;
        q.push("0000");
        int step = 0;
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                string tp = q.front();
                q.pop();
                if (st.find(tp) != st.end())
                    continue;
                if (tp == target)
                    return step;
                for (int i = 0; i < 4; i++)
                {
                    char temp = target[i];
                    char temp2 = tp[i];
                    int val = temp2 - '0';
                    string temp3 = tp;
                    temp3[i] = char(((val + 1 > 9) ? 0 : val + 1) + 48);
                    if (visited[temp3] == 0)
                    {
                        visited[temp3] = 1;
                        q.push(temp3);
                    }
                    temp3[i] = char(((val - 1 < 0) ? 9 : val - 1) + 48);
                    if (visited[temp3] == 0)
                    {
                        visited[temp3] = 1;
                        q.push(temp3);
                    }
                }
            }
            step++;
        }
        return -1;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
