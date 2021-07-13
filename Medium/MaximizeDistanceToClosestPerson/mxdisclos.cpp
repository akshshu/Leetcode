
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDistToClosest(vector<int> &seats)
    {
        int size = seats.size();
        int k = -1;
        int ans = INT_MIN;
        for (int j = 0; j < size; j++)
        {
            if (seats[j] == 1)
            {
                if (k == -1)
                    ans = j;
                else
                    ans = max(ans, (j - k) / 2);
                k = j;
            }
        }
        if (seats[seats.size() - 1] == 0)
            ans = max(ans, size - 1 - k);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> seats = {1, 0, 0, 0, 1, 0, 1};
    auto ans = s.maxDistToClosest(seats);
    cout << ans;
    return 0;
}
