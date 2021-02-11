#include <bits/stdc++.h>
using namespace std;

template <typename T>
class graph
{
private:
    /* data */
public:
    map<T, list<T>> G;

    void addEdge(T i, T j)
    {
        G[i].push_back(j);
        // G[j].push_back(i);
    }
    void bfs(T src)
    {
        map<T, bool> vis;
        vis[src] = true;
        queue<T> q;

        q.push(src);
        while (!q.empty())
        {
            T node = q.front();
            cout << node;
            q.pop();
            for (auto nbrs : G[node])
            {
                if (!vis[nbrs])
                {
                    vis[nbrs] = true;
                    q.push(nbrs);
                }
            }
        }
    }

    void dfs_helper(T s, map<T, bool> &vis)
    {
        if (!vis[s])
        {
            cout << s;
            vis[s] = true;
        }
        for (auto nodes : G[s])
        {
            if (!vis[nodes])
            {

                dfs_helper(nodes, vis);
            }
        }
    }

    void dfs(T src)
    {
        map<T, bool> vis;

        for (auto nodes : G)
        {
            vis[nodes.first] = false;
        }
        dfs_helper(src, vis);
    }
    void sssp(T src, T dest)
    {
        map<T, int> dist;
        queue<T> q;
        for (auto nodes : G)
        {
            dist[nodes.first] = INT_MAX;
        }
        q.push(src);
        dist[src] = 0;

        while (!q.empty())
        {
            T node = q.front();
            // cout << node;

            q.pop();
            for (auto nbrs : G[node])
            {

                if (dist[nbrs] == INT_MAX)
                {
                    q.push(nbrs);
                    dist[nbrs] = dist[node] + 1;
                }
                // if (nbrs == dest)
                // {
                //     cout << dist[nbrs];
                //     return;
                // }
            }
        }
        cout << dist[dest];
    }
    void connected_components()
    {
        map<T, bool> vis;
        for (auto n : G)
        {
            vis[n.first] = false;
        }
        int cnt = 0;
        for (auto n : G)
        {
            if (!vis[n.first])
            {
                dfs_helper(n.first, vis);

                cnt++;
            }
        }
        cout << "Comp cnt " << cnt << endl;
    }

    void dag_dfs_helper(T s, map<T, bool> &vis, list<T> &q)
    {
        if (!vis[s])
        {
            vis[s] = true;
            for (auto n : G[s])
            {
                dag_dfs_helper(n, vis, q);
            }
            q.push_front(s);
        }
    }

    void dag(T src)
    {
        map<T, bool> vis;
        list<T> q;
        for (auto n : G)
            vis[n.first] = false;
        for (auto n : G)
        {
            if (!vis[n.first])
            {
                dag_dfs_helper(n.first, vis, q);
            }
        }
        for (auto n : q)
        {
            cout << n << " ";
        }
    }

    void dag_bfs(T src)
    {
        map<T, int> indeg;
        list<T> ans;
        list<T> q;
        for (auto n : G)
            indeg[n.first] = 0;

        for (auto n : G)
            for (auto nbr : n.second)
                indeg[nbr]++;

        for (auto n : G)
            if (indeg[n.first] == 0)
                q.push_back(n.first);
        while (!q.empty())
        {
            T node = q.front();
            q.pop_front();
            cout << node;
            for (auto nbr : G[node])
            {
                indeg[nbr]--;
                if (indeg[nbr] == 0)
                {
                    q.push_back(nbr);
                }
            }
        }
    }

    bool cycle_dfs_helper(T node, map<T, bool> &vis, map<T, bool> &stak)
    {
        vis[node] = true;
        stak[node] = true;
        for (auto nbr : G[node])
        {
            if (stak[nbr])
            {
                return true;
            }
            else if (!vis[nbr])
            {
                if (cycle_dfs_helper(nbr, vis, stak))
                {
                    return true;
                }
            }
        }
        stak[node] = false;
        return false;
    }

    bool cycle(T src)
    {
        map<T, bool> vis;
        map<T, bool> stak;

        for (auto node : G)
        {
            vis[node.first] = false;
            stak[node.first] = false;
        }
        for (auto node : G)
        {
            if (cycle_dfs_helper(node.first, vis, stak))
                return true;
        }
        return false;
    }
};

int main()
{
    graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 7);
    g.addEdge(7, 1);

    // g.dfs(1);
    // g.bfs(1);
    // g.sssp(1, 4);
    if (g.cycle(1))
        cout << "true";
    else
        cout << "false";
    return 0;
}