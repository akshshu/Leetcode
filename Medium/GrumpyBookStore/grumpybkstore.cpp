
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        vector<int> grumpyPos;
        int maxCustCount = 0;
        int currentCustCount = 0;
        int i, j = 0;
        for (i = 0; i < grumpy.size(); i++)
        {
            if (grumpy[i] == 1)
                grumpyPos.push_back(i);
            else
                currentCustCount += customers[i];
        }
        i = 0;
        while (j < grumpyPos.size())
        {
            if (grumpyPos[j] - grumpyPos[i] + 1 <= minutes)
            {
                currentCustCount += customers[grumpyPos[j]];
                j++;
            }
            else
            {
                if (currentCustCount > maxCustCount)
                    maxCustCount = currentCustCount;
                currentCustCount -= customers[grumpyPos[i]];
                i++;
            }
        }
        if (currentCustCount > maxCustCount)
            maxCustCount = currentCustCount;

        return maxCustCount;
    }
};
int main()
{
    Solution s;
    vector<int> customers = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy = {0, 1, 0, 1, 0, 1, 0, 1};
    int minutes = 3;
    auto ans = s.maxSatisfied(customers, grumpy, minutes);
    cout << ans;
    return 0;
}
