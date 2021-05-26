
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string ans = "";
    int makeInt(string s, int start, int last)
    {
        int p = 1;
        int num = 0;
        for (int i = last; i >= start; i--)
        {
            num += ((int)s[i] - 48) * p;
            p = p * 10;
        }
        return num;
    }
    void recurs(string s, int index, int &track)
    {
        while (s[index] != ']')
        {
            if (((int)s[index] >= 48) && ((int)s[index] <= 57))
            {
                int k = index;
                while (s[k] != '[')
                    k++;
                int multiplier = makeInt(s, index, k - 1);
                index = k + 1;
                int track;
                for (int cnt = 0; cnt < multiplier; cnt++)
                {
                    track = index;
                    recurs(s, index, track);
                }
                index = track;
            }
            else if (s[index] != ']')
                ans += s[index];

            index = index + 1;
            track = index;
        }
    }

    string decodeString(string s)
    {
        int i = 0;
        while (i <= s.size() - 1)
        {
            if (((int)s[i] >= 48) && ((int)s[i] <= 57))
            {
                int k = i;
                while (s[k] != '[')
                    k++;
                int multiplier = makeInt(s, i, k - 1);
                i = k + 1;
                int track;
                for (int cnt = 0; cnt < multiplier; cnt++)
                {
                    track = i;
                    recurs(s, i, track);
                }
                i = track;
            }
            else if (s[i] != ']')
                ans += s[i];
            i++;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.decodeString("3[z]2[2[y]pq4[2[jk]e1[f]]]ef");
    cout << ans;
    return 0;
}
