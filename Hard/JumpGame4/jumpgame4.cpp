
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<int, vector<int>> mp;
    int minJumps(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]].push_back(i);
        }
        int count = 0;
        queue<int> q;
        q.push(0);
        vector<int> visited(arr.size(), 0);
        while (!q.empty())
        {
            int si = q.size();
            while (si--)
            {
                if (q.front() == arr.size() - 1)
                    return count;
                int i = q.front();
                visited[i] = 1;
                q.pop();
                for (int x : mp[arr[i]])
                {
                    if (!visited[x])
                    {
                        visited[x] = 1;
                        q.push(x);
                    }
                }
                mp[arr[i]].clear();
                if (i - 1 >= 0 and !visited[i - 1])
                {
                    visited[i - 1] = 1;
                    q.push(i - 1);
                }
                if (i + 1 < arr.size() and !visited[i + 1])
                {
                    visited[i + 1] = 1;
                    q.push(i + 1);
                }
            }
            count++;
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {100, -23, -23, 404, 100, 23, 23, 3, 404};

    auto ans = s.minJumps(arr);
    return 0;
}
