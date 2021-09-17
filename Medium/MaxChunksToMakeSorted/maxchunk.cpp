
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int n = arr.size();
        int maxL = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            maxL = max(maxL, arr[i]);
            if (maxL == i)
                count++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
