
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck)
    {
        deque<int> dq;
        sort(deck.begin(), deck.end(), greater<int>());
        dq.push_back(deck[0]);
        for (int i = 1; i < deck.size(); i++)
        {
            int el = dq.back();
            dq.pop_back();
            dq.push_front(el);
            dq.push_front(deck[i]);
        }
        vector<int> ans;
        for (int x : dq)
            ans.push_back(x);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> deck = {17, 13, 11, 2, 3, 5, 7};
    auto ans = s.deckRevealedIncreasing(deck);
    return 0;
}
