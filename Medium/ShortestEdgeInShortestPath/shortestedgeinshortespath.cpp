vector<long long> shrtdis(int node, vector<vector<pair<int, int>>> &adj, int A)
{
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, node});
    vector<long long> dist(A + 1, LLONG_MAX);
    vector<int> visited(A + 1, 0);
    dist[node] = 0;
    while (!pq.empty())
    {
        auto tp = pq.top();
        pq.pop();
        if (visited[tp.second])
            continue;
        visited[tp.second] = 1;
        for (auto ad : adj[tp.second])
        {
            if (dist[ad.first] > (dist[tp.second] + ad.second))
            {
                dist[ad.first] = dist[tp.second] + ad.second;
                pq.push({dist[ad.first], ad.first});
            }
        }
    }
    return dist;
}
int Solution::solve(const int A, const vector<vector<int>> &B, const int C, const int D)
{
    vector<vector<pair<int, int>>> adj(A + 1);
    for (auto el : B)
    {
        adj[el[0]].push_back({el[1], el[2]});
        adj[el[1]].push_back({el[0], el[2]});
    }
    vector<long long> srcD = shrtdis(C, adj, A);
    if (srcD[D] == LLONG_MAX)
        return -1;
    long long fin = srcD[D];
    vector<long long> destD = shrtdis(D, adj, A);
    int ans = INT_MAX;
    for (int i = 0; i < B.size(); i++)
    {

        if (srcD[B[i][0]] + B[i][2] + destD[B[i][1]] == fin)
            ans = min(ans, B[i][2]);
        if (destD[B[i][0]] + B[i][2] + srcD[B[i][1]] == fin)
            ans = min(ans, B[i][2]);
    }
    return ans;
}