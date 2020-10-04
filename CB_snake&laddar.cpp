#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
    unordered_map<T, list<T>> l;

public:
    void addEdge(T x, T y)
    {
        l[x].push_back(y);
        // if(bidir)
        //    l[y].push_back(make_pair(x, wt));
    }

    void prt()
    {
        for (auto p : l)
        {
            T city = p.first;
            auto nbrs = p.second;
            cout << p.first << "->";
            for (auto nbr : nbrs)
            {
                cout << nbr.first << "," << nbr.second << "->";
            }
            cout << endl;
        }
    }

    void bfs(T c)
    {
        map<T, bool> visited;
        queue<T> q;
        q.push(c);
        visited[c] = true;
        while (!q.empty())
        {
            for (auto nbr : l[q.front()])
            {
                if (visited[nbr.first] == false)
                {
                    q.push(nbr.first);
                    visited[nbr.first] = true;
                }
            }
            cout << q.front() << " ";
            q.pop();
        }
    }
};

int main()
{
    int b[50] = {0};

    b[2] = 13;
    b[5] = 2;
    b[9] = 18;
    b[18] = 11;
    b[17] = -13;
    b[20] = 14;
    b[24] = -8;
    b[25] = 10;
    b[32] = -2;
    b[34] = 22;
}