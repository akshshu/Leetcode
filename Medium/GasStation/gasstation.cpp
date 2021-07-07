
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int ans;
    int recurs(int count, vector<int> &gas, vector<int> &cost, int currentIndex, int total)
    {
        if (count == gas.size())
        {
            ans = currentIndex;
            return ans;
        }
        int newIndex = currentIndex + 1;
        newIndex = newIndex % gas.size();
        total = total - cost[newIndex] + gas[newIndex];
        if (total < 0)
            return -1;
        return recurs(count + 1, gas, cost, newIndex, total);
    }
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {

        for (int i = 0; i < gas.size(); i++)
        {
            if (gas[i] - cost[i] < 0)
                continue;
            if (recurs(0, gas, cost, i, gas[i] - cost[i]) != -1)
                return ans;
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    auto ans = s.canCompleteCircuit(gas, cost);
    cout << ans;
    return 0;
}
