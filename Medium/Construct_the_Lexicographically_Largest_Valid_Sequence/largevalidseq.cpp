
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sequence;
    vector<int> visited;
    int size;
    int copy;

    bool recurs(int j)
    {
        if (j == size)
            return true;
        if (sequence[j] != -1)
            return recurs(j + 1);
        for (int num = copy; num >= 0; num--)
        {
            if (num == 1)
            {
                if (visited[num] == 0)
                {
                    sequence[j] = 1;
                    visited[num] = 1;

                    if (recurs(j + 1))
                        return true;
                    sequence[j] = -1;
                    visited[num] = 0;
                }
            }
            else
            {
                if (visited[num] == 0 && (j + num < size) && sequence[j + num] == -1)
                {
                    sequence[j] = sequence[num + j] = num;
                    visited[num] = 1;
                    if (recurs(j + 1))
                        return true;
                    sequence[j] = sequence[num + j] = -1;
                    visited[num] = 0;
                }
            }
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n)
    {
        copy = n;
        size = 1 + (n - 1) * 2;
        sequence.resize(size);
        visited.resize(n + 1);
        fill(sequence.begin(), sequence.end(), -1);
        fill(visited.begin(), visited.end(), 0);
        recurs(0);
        return sequence;
    }
};

int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
