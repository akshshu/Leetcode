
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
            return "0";
        if (num1 == "1")
            return num2;
        if (num2 == "1")
            return num1;
        if (num2.size() > num1.size())
            swap(num1, num2);
        int carry = 0;
        int finalStrSize = num1.size() + num2.size();
        string fin(finalStrSize, '-');
        int index;
        for (int i = num2.size() - 1; i >= 0; i--)
        {
            for (int j = num1.size() - 1; j >= 0; j--)
            {
                index = finalStrSize - j - 1 - i - 1;
                fin[index] = (fin[index] == '-') ? '0' : fin[index];
                int temp = (num2[i] - 48) * (num1[j] - 48) + carry + (fin[index] - 48);
                int numtoadd = temp % 10;
                if (temp > 9)
                    carry = temp / 10;
                else
                    carry = 0;
                fin[index] = numtoadd + '0';
            }
            if (carry)
            {
                index++;
                fin[index] = (fin[index] == '-') ? '0' : fin[index];
                fin[index] = carry % 10 + '0';
                carry /= 10;
            }
        }
        int trailingzero = 0;
        reverse(fin.begin(), fin.end());
        for (char x : fin)
        {
            if (x != '-')
                break;
            trailingzero++;
        }
        fin = fin.substr(trailingzero, finalStrSize - trailingzero);
        return fin;
    }
};
int main()
{
    Solution s;
    string s1 = "3422", s2 = "5461";
    auto ans = s.multiply(s1, s2);
    cout << ans;
    return 0;
}
