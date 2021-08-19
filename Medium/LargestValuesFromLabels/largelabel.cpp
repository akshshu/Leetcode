
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestValsFromLabels(vector<int> &values, vector<int> &labels, int numWanted, int useLimit)
    {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < values.size(); i++)
        {
            pq.push({values[i], labels[i]});
            mp[labels[i]] = useLimit;
        }
        int ans = 0;
        while (!pq.empty() && numWanted)
        {
            auto top = pq.top();
            if (mp[top.second])
            {
                ans += top.first;
                numWanted--;
                mp[top.second]--;
            }
            pq.pop();
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> values = {5, 4, 3, 2, 1};
    vector<int> labels = {1, 1, 2, 2, 3};
    int numWanted = 3, useLimit = 1;
    auto ans = s.largestValsFromLabels(values, labels, numWanted, useLimit);
    return 0;
}
