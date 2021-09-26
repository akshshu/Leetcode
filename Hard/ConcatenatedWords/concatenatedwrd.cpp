
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct trie
    {
        int end = 0;
        trie *child[26] = {nullptr};
    };
    trie *root = new trie();
    void insert(string &word, trie *root)
    {
        for (char x : word)
        {
            if (root->child[x - 'a'] == nullptr)
                root->child[x - 'a'] = new trie();
            root = root->child[x - 'a'];
        }
        root->end++;
    }
    bool search(string word, trie *root)
    {
        vector<bool> dp(word.size() + 1, false);
        dp[0] = true;
        for (int i = 0; i < word.size(); i++)
        {
            if (dp[i] == false)
                continue;
            trie *temp = root;
            for (int j = i; j < word.size(); j++)
            {
                if (temp->child[word[j] - 'a'] == nullptr)
                    break;
                temp = temp->child[word[j] - 'a'];
                if (i == 0 and j == word.size() - 1)
                    continue;
                if (temp->end)
                    dp[j + 1] = true;
            }
        }
        if (dp[word.size()])
            return true;
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
    {
        vector<string> ans;
        for (string word : words)
            insert(word, root);
        for (string word : words)
            if (word.size() and search(word, root))
                ans.push_back(word);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
