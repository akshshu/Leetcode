
#include <bits/stdc++.h>
using namespace std;
struct trie
{
    char val;
    trie *child[2] = {nullptr};
};
class Solution
{
public:
    void insert(string &s, trie *root)
    {
        for (char &x : s)
        {
            if (!root->child[x - '0'])
            {
                trie *newN = new trie();
                root->child[x - '0'] = newN;
                newN->val = x;
            }
            root = root->child[x - '0'];
        }
    }
    int compute(int x, trie *root, int b)
    {
        int ans = 0;
        for (int i = b; i >= 0; i--)
        {
            int bit = (x >> i) & 1;
            if (root->child[1 - bit])
            {
                root = root->child[1 - bit];
                ans |= (1 << i);
            }
            else
                root = root->child[bit];
        }
        return ans;
    }

    int findMaximumXOR(vector<int> &nums)
    {
        trie *root = new trie();
        for (int x : nums)
        {
            string s = bitset<32>(x).to_string();
            insert(s, root);
        }
        int ans = 0;
        for (int x : nums)
            ans = max(ans, compute(x, root, 31));
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    auto ans = s.findMaximumXOR(nums);
    return 0;
}
