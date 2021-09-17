
#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
public:
    stack<pair<int, int>> st;
    StockSpanner()
    {
    }
    int next(int price)
    {
        int x = 1;
        while (!st.empty() and st.top().second <= price)
        {
            x += st.top().first;
            st.pop();
        }
        st.push({x, price});
        return x;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
