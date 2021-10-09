
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct trie
    {
        int end = 0;
        string temp = "";
        trie *child[26] = {nullptr};
    };
    trie *root = new trie();
    void insert(trie *root, string s)
    {
        string t = "";
        for (char x : s)
        {
            t += x;
            int index = x - 'a';
            if (root->child[index] == nullptr)
                root->child[index] = new trie();
            root = root->child[index];
            root->temp = t;
        }
        root->end++;
    }
    vector<string> ans;

    void helper(vector<vector<char>> &board, trie *root, int iInd, int jInd)
    {
        if (iInd == board.size() || jInd == board[0].size() || iInd < 0 || jInd < 0 || board[iInd][jInd] == '#')
            return;
        int index = board[iInd][jInd] - 'a';
        if (root->child[index] == nullptr)
            return;
        char temp = board[iInd][jInd];
        board[iInd][jInd] = '#';
        root = root->child[index];
        if (root->end)
        {
            ans.push_back(root->temp);
            root->end--;
        }
        helper(board, root, iInd + 1, jInd);
        helper(board, root, iInd, jInd + 1);
        helper(board, root, iInd - 1, jInd);
        helper(board, root, iInd, jInd - 1);
        board[iInd][jInd] = temp;
    }
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        for (string str : words)
            insert(root, str);
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                helper(board, root, i, j);
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
