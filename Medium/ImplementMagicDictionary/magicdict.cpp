
#include <bits/stdc++.h>
using namespace std;
class MagicDictionary
{
public:
    /** Initialize your data structure here. */
    struct dict
    {
        int end = 0;
        dict *child[26] = {nullptr};
    };
    MagicDictionary()
    {
    }
    dict *root = new dict();
    void buildDict(vector<string> dictionary)
    {
        for (string word : dictionary)
        {
            dict *temp = root;
            for (char x : word)
            {
                int index = x - 'a';
                if (temp->child[index] == nullptr)
                    temp->child[index] = new dict();
                temp = temp->child[index];
            }
            temp->end = 1;
        }
    }
    bool dfs(int i, string word, int change, dict *temp)
    {
        if (i == word.size())
        {
            if (temp->end and change)
                return true;
            return false;
        }
        int index = word[i] - 'a';
        bool tempans = false;
        if (change == 0)
        {
            for (int j = 0; j < 26; j++)
            {
                if (j != index and temp->child[j])
                {
                    if (dfs(i + 1, word, change + 1, temp->child[j]))
                    {
                        tempans = true;
                        break;
                    }
                }
            }
        }
        if (tempans == false)
        {
            if (temp->child[index])
                return dfs(i + 1, word, change, temp->child[index]);
            return false;
        }
        return tempans;
    }
    bool search(string searchWord)
    {

        dict *temp = root;
        return dfs(0, searchWord, 0, temp);
    }
};

int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
