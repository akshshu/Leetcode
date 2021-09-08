
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nCr(int n, int r)
    {
        if (r > n - r)
        {
            r = n - r;
        }
        int ans = 1;
        for (int i = 0; i < r; i++)
        {
            ans *= (n - i);
            ans /= i + 1;
        }
        return ans;
    }
    string kthSmallestPath(vector<int> &destination, int k)
    {
        int totalHs = destination[1];
        int totalVs = destination[0];
        int currHs = 0;
        int currVs = 0;
        int total = totalHs + totalVs;
        int left;
        string ans = "";
        while (total--)
        {
            if (totalHs - currHs == 0)
                left = 0;
            else
                left = nCr(total, totalHs - currHs - 1);
            if (left < k)
            {
                ans += "V";
                k -= left;
            }
            else
            {
                ans += "H";
                currHs += 1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> dest = {2, 3};
    int k = 1;
    auto ans = s.kthSmallestPath(dest, k);
    return 0;
}
