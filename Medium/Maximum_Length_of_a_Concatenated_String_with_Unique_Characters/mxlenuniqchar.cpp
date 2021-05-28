
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxL = 0;
    int funcCall = 0;
    void recurs(vector<string> &arr, int i, int j, string currStr)
    {
        if (i > j)
            return;
        if (i >= 0)
        {
            funcCall++;
            currStr += arr[i];
            int check = 0;
            for (int k = 0; k < currStr.size(); k++)
            {
                int indextoSet = (int)(currStr[k] - 'a');
                if (check & (1 << indextoSet))
                    return;
                check = check | (1 << indextoSet);
            }
            if (currStr.size() > maxL)
                maxL = currStr.size();
        }
        for (int p = i + 1; p <= j; p++)
            recurs(arr, p, j, currStr);
    }

    int maxLength(vector<string> &arr)
    {
        recurs(arr, -1, arr.size() - 1, "");
        cout << funcCall << endl;
        return maxL;
    }
};
int main()
{
    Solution s;
    vector<string> str = {"ab", "ba", "cd", "dc", "ef", "fe", "gh", "hg", "ij", "ji", "kl", "lk", "mn", "nm", "op", "po"};
    cout << str.size() << endl;
    auto ans = s.maxLength(str);
    cout << ans;
    return 0;
}
