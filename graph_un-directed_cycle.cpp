//directed graph
// #include <bits/stdc++.h>
// using namespace std;

// class Graph
// {
//     int V;

//     map<int, list<int>> G;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//     }
//     void addEdge(int x, int y)
//     {
//         G[x].push_back(y);
//     }

//     bool cycFindHelper(int node, bool *vis, bool *stack){
//         vis[node]=true;
//         stack[node]=true;
//         for (auto nbr : G[node])
//         {
//             if(stack[nbr]==true)
//             return true;
//             if(vis[nbr]==false){
//                 bool cycPresent = cycFindHelper(nbr, vis, stack);
//                 if(cycPresent){
//                     return true;
//                 }
//             }
//         }
//         stack[node]=false;
//         return false;
//     }

//     bool cycleFind(int src)
//     {
//         bool *vis = new bool[V];
//         bool *stack = new bool[V];
//         for(int i=0; i<V; i++){
//             vis[i]=false;
//             stack[i]=false;
//         }
//         return cycFindHelper(src, vis, stack);
//     }
// };

// int main()
// {
//     Graph g(7);
//     g.addEdge(0, 1);
//     g.addEdge(1, 2);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);
//     g.addEdge(4, 5);
//     g.addEdge(5, 6);
//     g.addEdge(1, 5);
//     // g.addEdge(4, 2);
//     if(g.cycleFind(0))
//     cout<<"YES";
//     else 
//     cout<<"NO"<<endl;
// }
////////////////////////////////////////////////
// undirected graph

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;

    map<int, list<int>> G;

public:
    Graph(int V)
    {
        this->V = V;
    }
    void addEdge(int x, int y)
    {
        G[x].push_back(y);
        G[y].push_back(x);
    }

    bool cycFindHelper(int node, bool *vis, int parent){
        vis[node]=true;
        for (auto nbr : G[node])
        {
            if(vis[nbr]==false){
                bool cycPresent = cycFindHelper(nbr, vis, node);
                if(cycPresent){
                    return true;
                }
            }
            else if(nbr!=parent)
                return true;
        }
        return false;
    }

    bool cycleFind(int src)
    {
        bool *vis = new bool[V];
        for(int i=0; i<V; i++){
            vis[i]=false;
        }
        return cycFindHelper(src, vis, -1);
    }
};

int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    // g.addEdge(1, 5);
    // g.addEdge(4, 2);
    if(g.cycleFind(0))
    cout<<"YES";
    else 
    cout<<"NO"<<endl;
}