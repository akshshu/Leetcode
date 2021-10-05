
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        if (n == k)
            return totalSum;
        int currentSum = 0;
        int i = 0;
        int ans = 0;
        for (i = 0; i < n - k; i++)
            currentSum += cardPoints[i];
        int p = 0;
        for (int j = i; j < n; j++)
        {
            ans = max(ans, totalSum - currentSum);
            currentSum -= cardPoints[p++];
            currentSum += cardPoints[j];
        }
        ans = max(ans, totalSum - currentSum);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
