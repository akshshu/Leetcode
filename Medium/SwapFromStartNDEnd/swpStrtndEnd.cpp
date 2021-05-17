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
    ListNode *swapNodes(ListNode *head, int k)
    {

        if (head == nullptr)
            return head;
        vector<ListNode *> maps;

        int size = 0;
        while (head != nullptr)
        {
            maps.push_back(head);
            head = head->next;
            size++;
        }
        swap(maps[k - 1]->val, maps[size - k]->val);
        return maps[0];
    }
};
// in 2 passes
// class Solution
// {
// public:
//     ListNode *swapNodes(ListNode *head, int k)
//     {
//         if (head == nullptr)
//             return head;
//         int size = 0;
//         ListNode *copy = head;
//         while (head != nullptr)
//         {
//             head = head->next;
//             size++;
//         }
//         head = copy;
//         size = size - k;
//         k = k - 1;
//         ListNode *frst;
//         if (size < k)
//         {
//             swap(k, size);
//         }
//         while (copy != nullptr)
//         {
//             if (k == 0)
//                 frst = copy;
//             if (size == 0)
//             {
//                 swap(copy->val, frst->val);
//                 break;
//             }
//             k--;
//             size--;
//             copy = copy->next;
//         }
//         return head;
//     }
// };