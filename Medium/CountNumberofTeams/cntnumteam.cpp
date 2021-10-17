
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        int n = rating.size();
        vector<int> leftgreater(n, 0);
        vector<int> rightgreater(n, 0);
        vector<int> leftsmaller(n, 0);
        vector<int> rightsmaller(n, 0);
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (rating[j] < rating[i])
                    leftsmaller[i]++;
                else if (rating[j] > rating[i])
                    leftgreater[i]++;
            }
        }
        for (int i = n - 2; i >= 1; i--)
        {
            for (int j = n - 1; j > i; j--)
            {
                if (rating[j] < rating[i])
                    rightsmaller[i]++;
                else if (rating[j] > rating[i])
                    rightgreater[i]++;
            }
        }

        long long ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            ans += (long long)leftsmaller[i] * (long long)rightgreater[i];
            ans += (long long)leftgreater[i] * (long long)rightsmaller[i];
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
