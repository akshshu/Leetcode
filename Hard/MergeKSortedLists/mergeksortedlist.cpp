
#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>, greater<pair<int, ListNode *>>> pq;
        for (auto x : lists)
            if (x)
                pq.push({x->val, x});
        if (pq.empty())
            return nullptr;
        auto tp = pq.top();
        pq.pop();
        ListNode *root = new ListNode(tp.first);
        ListNode *root2 = root;
        ListNode *np = tp.second;
        np = np->next;
        if (np)
            pq.push({np->val, np});
        while (!pq.empty())
        {
            tp = pq.top();
            pq.pop();
            ListNode *newNode = new ListNode(tp.first);
            root2->next = newNode;
            root2 = newNode;
            np = tp.second;
            np = np->next;
            if (np)
                pq.push({np->val, np});
        }
        return root;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
