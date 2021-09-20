
#include <bits/stdc++.h>
using namespace std;
class RunLengthDecoder
{
public:
    unordered_map<int, char> mp;
    unordered_map<char, vector<pair<int, int>>> lmp;
    vector<pair<int, int>> indexpair;
    RunLengthDecoder(string s)
    {
        int i = 0;
        int lower_limit = 0;
        int n = s.size();
        while (i < n)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                string temp = "";
                while (s[i] >= '0' and s[i] <= '9')
                {
                    temp += s[i];
                    i++;
                }
                int num = stoi(temp);
                if (num != 0)
                {
                    int higher_limit = lower_limit + num - 1;
                    indexpair.push_back({lower_limit, higher_limit});
                    mp[higher_limit] = s[i];
                    lmp[s[i]].push_back({lower_limit, higher_limit});
                    lower_limit = higher_limit + 1;
                }
            }
            i++;
        }
    }

    string value(int i)
    {
        int start = 0, end = indexpair.size() - 1;
        string s = "";
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (i >= indexpair[mid].first and i <= indexpair[mid].second)
            {
                s += mp[indexpair[mid].second];
                break;
            }
            else if (i > indexpair[mid].second)
                start = mid + 1;
            else if (i < indexpair[mid].first)
                end = mid - 1;
        }
        return s;
    }

    string valueInRange(string c, int i, int j)
    {
        string ans = "";
        for (char x = c[0]; x <= 'z'; x++)
        {
            int start = 0;
            int end = lmp[x].size() - 1;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                pair<int, int> p = lmp[x][mid];
                if ((i >= p.first and i <= p.second) || (j - 1 >= p.first and j - 1 <= p.second))
                {
                    ans += x;
                    return ans;
                }
                else if (i < p.first and j - 1 > p.second)
                {
                    ans += x;
                    return ans;
                }
                if (j - 1 < p.first)
                    end = mid - 1;
                else if (i > p.second)
                    start = mid + 1;
            }
        }
        return "?";
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
