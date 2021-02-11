#include <bits/stdc++.h>
using namespace std;

void dfs_helper(map<int, list<int>> g1, int node, map<int, bool> &vis, vector<int> &stack)
{

    vis[node] = true;
    for (auto nbr : g1[node])
    {
        if (!vis[nbr])
            dfs_helper(g1, nbr, vis, stack);
    }
    stack.push_back(node);
}

void dfs_helper2(map<int, list<int>> g2, int node, map<int, bool> &vis)
    {
        if (!vis[node])
        {
            cout << node<<" ";
            vis[node] = true;
        }
        for (auto nodes : g2[node])
            if (!vis[nodes])
                dfs_helper2(g2, nodes, vis);
    }

int main()
{
    int E, V;
    map<int, list<int>> g1, g2;
    map<int, bool> vis;
    vector<int> stack;

    cin >> E >> V;
    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        g1[a].push_back(b);
        g2[b].push_back(a);
    }

    for(auto n : g1){
        vis[n.first]=false;
    }

    for (auto node : g1)
    {
        if (!vis[node.first])
            dfs_helper(g1, node.first, vis, stack);
    }
    for(auto n : g1){
        vis[n.first]=false;
    }
    for(auto s : stack){
    cout<<s<<" ";
    }
    char x='A';
    for(auto s : stack){
        if(!vis[s]){
        cout<<"Component "<<x<<" ";
        dfs_helper2(g2, s, vis);
        x++;
        
        }
    }

}

