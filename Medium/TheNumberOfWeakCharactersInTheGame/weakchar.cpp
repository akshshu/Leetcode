
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool customSort(vector<int> &a, vector<int> &b)
    {
        if (a[0] < b[0])
            return true;
        if (a[0] == b[0])
            if (a[1] >= b[1])
                return true;
        return false;
    }
    int numberOfWeakCharacters(vector<vector<int>> &properties)
    {
        int n = properties.size();
        sort(properties.begin(), properties.end(), customSort);
        stack<pair<int, int>> st;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and st.top().second <= properties[i][1])
                st.pop();
            if (!st.empty())
                count++;
            st.push({properties[i][0], properties[i][1]});
        }

        return count;
    }
};
int main()
{
    Solution s;
    auto ans = s.numberOfWeakCharacters();
    return 0;
}
