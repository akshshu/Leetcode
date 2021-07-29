
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //     class Solution:
    //     def isValidSerialization(self, preorder: str) -> bool:
    //         lists=preorder.split(",")
    //         count=[]
    //         for el in lists:
    //             if(el=='#'):
    //                 count.append(-10)
    //             else:
    //                 count.append(2)
    //         j=0
    //         st=[]
    //         for i in range(len(lists)):
    //             if(i==0):
    //                 st.append(0)
    //                 continue
    //             while(len(st)>0 and count[st[-1]]<=0):
    //                 st.pop()
    //             if(len(st)==0):
    //                 return False;
    //             count[st[-1]]=count[st[-1]]-1
    //             if(not lists[i]=='#'):
    //                 st.append(i)
    //         while(len(st)>0 and count[st[-1]]<=0):
    //                 st.pop()
    //         if(len(st)):
    //             return False
    //         return True

    bool isValidSerialization(string preorder)
    {
        vector<int> vals;
        for (int i = 0; i < preorder.size(); i++)
        {
            if (preorder[i] == '#')
            {
                vals.push_back(-10);
                i++;
            }
            else
            {
                while (i < preorder.size() and preorder[i] != ',')
                {
                    i++;
                }
                vals.push_back(2);
            }
        }
        stack<int> st;
        st.push(0);
        for (int i = 1; i < vals.size(); i++)
        {
            while (!st.empty() and vals[st.top()] <= 0)
                st.pop();
            if (st.empty())
                return false;
            vals[st.top()] = vals[st.top()] - 1;
            if (vals[i] != -10)
                st.push(i);
        }
        while (!st.empty() and vals[st.top()] <= 0)
            st.pop();
        if (!st.empty())
            return false;
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
