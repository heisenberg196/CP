#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pii;

bool dfs_helper(int src, int dest, int col, map<int, bools> &vis, map<int, list<pair<int, int>>> graph){
    if(src==dest)
    return true;
    for(auto nbrs : graph[src]){
        if(!vis[nbrs.first]  and nbrs.second==col){
            bool reached = dfs_helper(nbrs.first, v, nbrs.second, vis, graph);   
        }
    }

}

int dfs(int u, int v,map<int, list<pair<int, int>>> graph){
    int cnt=0;
    for(auto nbrs : graph[u]){
        map<int, bools> vis;
        vis[u]=true;
        vis[nbrs.first]=true;
        bool reached = dfs_helper(nbrs.first, v, nbrs.second, vis, graph);
        if(reached)
        cnt++;
    }
    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;
    // vector<pair<int, list<pii>>> graph;
    map<int, list<pair<int, int>>> graph; 
    for (int i = 0; i < m; i++)
    {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        graph[t1].push_back({t2, t3});
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;
        cout<<dfs(u, v, graph)<<endl;
    }
}