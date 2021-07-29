
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool verifyPreorder(vector<int> &preorder)
    {
        stack<int> st;
        int check = INT_MIN;
        for (int i = 0; i < preorder.size(); i++)
        {
            while (!st.empty() && preorder[i] > st.top())
            {
                check = st.top();
                st.pop();
            }
            if (check > preorder[i])
                return false;
            st.push(preorder[i]);
        }
        return true;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 2};
    auto ans = s.verifyPreorder(nums);
    return 0;
}
