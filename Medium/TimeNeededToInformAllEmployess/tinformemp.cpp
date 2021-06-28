
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minutes = 0;
    vector<vector<int>> childlist;
    void recurs(int headID, vector<int> &informTime, int currTime)
    {
        for (int i : childlist[headID])
            recurs(i, informTime, currTime + informTime[headID]);
        minutes = (currTime > minutes) ? currTime : minutes;
    }
    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
    {
        childlist.resize(n);
        for (int i = 0; i < manager.size(); i++)
            if (manager[i] != -1)
                childlist[manager[i]].push_back(i);
        for (int i : childlist[headID])
            recurs(i, informTime, informTime[headID]);

        return minutes;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
