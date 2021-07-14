
#include <bits/stdc++.h>
using namespace std;
class ExamRoom
{
public:
    int size;
    int seats_taken = 0;
    set<int> pq;
    ExamRoom(int n)
    {
        size = n;
    }
    int seat()
    {
        int ans = 0;
        int pos = 0;
        if (!seats_taken)
        {
            pq.insert(0);
            seats_taken++;
            return 0;
        }
        int prev = 0;
        int val = *pq.begin();
        if (val != 0)
        {
            ans = val;
        }
        prev = val;
        for (auto iter = pq.begin(); iter != pq.end(); ++iter)
        {
            int val = *iter;
            if (ans < (val - prev) / 2)
            {
                ans = (val - prev) / 2;
                pos = prev + (val - prev) / 2;
            }
            prev = val;
        }
        if (*pq.rbegin() != size - 1)
        {
            if (size - 1 - prev > ans)
            {
                pos = size - 1;
            }
        }
        seats_taken++;
        pq.insert(pos);
        return pos;
    }

    void leave(int p)
    {
        seats_taken--;
        pq.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
