
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int front = 0;
        int i = 0;
        int templength = 0, maxlength = INT_MIN;
        int cost = 0;
        while (i != s.size())
        {
            cost = cost + abs((int)(s[i] - t[i]));
            templength++;

            while (cost > maxCost)
            {

                cost = cost - abs((int)(s[front] - t[front]));
                front = front + 1;
                templength--;
            }
            maxlength = (templength > maxlength) ? templength : maxlength;

            i++;
        }
        return max(templength, maxlength);
    }
};
int main()
{
    Solution s;
    auto ans = s.equalSubstring("krrgw", "zjxss", 19);
    cout << ans;
    return 0;
}
