
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canReorderDoubled(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        int i;
        for (i = 0; i < arr.size(); i++)
        {
            if (arr[i] > 0)
                break;
            if (mp[2 * arr[i]])
                mp[2 * arr[i]]--;
            else
                mp[arr[i]]++;
        }
        int j = arr.size() - 1;
        while (j >= i)
        {
            if (mp[2 * arr[j]])
                mp[2 * arr[j]]--;
            else
                mp[arr[j]]++;
            j--;
        }
        for (int x : arr)
        {
            if (mp[x] > 0)
                return false;
        }
        return true;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {4, -2, 2, -4};
    auto ans = s.canReorderDoubled(arr);
    cout << ans;
    return 0;
}
