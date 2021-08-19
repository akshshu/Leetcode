
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int end = *max_element(piles.begin(), piles.end());
        int i = 1;
        int ans = 0;
        while (i <= end)
        {
            int mid = i + (end - i) / 2;
            int temp = 0;
            for (int j = 0; j < piles.size(); j++)
            {
                int x = ceil((double)piles[j] / (double)mid);
                temp += x;
                if (temp > h)
                    break;
            }
            if (temp > h)
                i = mid + 1;
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    auto ans = s.minEatingSpeed(piles, h);
    return 0;
}
