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
    void reorderList(ListNode *head)
    {

        if (head == nullptr || head->next == nullptr)
            return;
        ListNode *headCpy = head;

        vector<ListNode *> storage;
        while (headCpy)
        {
            storage.push_back(headCpy);
            headCpy = headCpy->next;
        }

        cout << endl;
        ListNode *headFrnd = head;

        headCpy = head->next;
        int e = storage.size() - 1;
        int s = 1;
        while (s < e && headCpy != nullptr && headCpy->next != nullptr)
        {
            storage[e]->next = headCpy;
            headFrnd->next = storage[e];
            storage[e - 1]->next = nullptr;
            headFrnd = headFrnd->next->next;
            headCpy = headCpy->next;
            e--;
            s++;
        }
    }
};