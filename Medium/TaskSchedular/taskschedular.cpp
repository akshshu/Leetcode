
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        if (n == 0)
            return tasks.size();
        sort(tasks.begin(), tasks.end());
        priority_queue<int> qp;
        // char x[n + 1];
        int c[n + 1];
        for (int i = 0; i < tasks.size(); i++)
        {
            char x = tasks[i];
            int count = 0;
            while (i < tasks.size() && x == tasks[i])
            {
                count++;
                i++;
            }
            qp.push(count);
            i--;
        }
        int ans = 0;
        // string s="";
        while (qp.size())
        {
            int k = n + 1;

            int i = 0;
            while (qp.size() && k)
            {
                auto tp = qp.top();
                // x[i] = tp.second;
                c[i++] = --tp;
                k--;
                ans++;
                // s+=x[i-1];
                qp.pop();
            }
            for (int j = 0; j < i; j++)
                if (c[j] > 0)
                    qp.push(c[j]);
            if (k && qp.size())
            {
                ans += k;
                // for(int j=0;j<k;j++)
                //     s+="idle";
            }
            k = n + 1;
        }
        // cout<<s<<endl;
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
