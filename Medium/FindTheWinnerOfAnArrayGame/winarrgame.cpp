
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getWinner(vector<int> &arr, int k)
    {
        int winCount = 0;
        int arrsize = arr.size();
        int z = 0, p = 1;
        if (k > arrsize - 1)
            return *max_element(arr.begin(), arr.end());
        while (true)
        {
            if (winCount == k)
                return arr[z];
            if (arr[z] > arr[p])
                swap(arr[z], arr[p]);
            else
                winCount = 0;
            winCount++;
            z++;
            p++;
            z = z % arrsize;
            p = p % arrsize;
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {2, 1, 3, 5, 4, 6, 7};
    int k = 2;
    auto ans = s.getWinner(arr, k);
    cout << ans;
    return 0;
}
