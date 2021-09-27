
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<int> visited(n, 0);
        queue<int> q;
        q.push(0);
        int visitedCount = 0;
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                int tp = q.front();
                q.pop();
                if (visited[tp])
                    continue;
                visitedCount++;
                visited[tp] = 1;
                for (int key : rooms[tp])
                {
                    if (!visited[key])
                        q.push(key);
                }
            }
        }
        return (visitedCount == n);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
