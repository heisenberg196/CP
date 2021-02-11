#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int E;
    map<int, list<pair<int, int>>> edges;

public:
    Graph(int E){
        this->E = E;
    }

    void addEdge(int x, int y, int wt)
    {
        G[x].push_back(make_pair(y, wt));
        G[y].push_back(make_pair(x, wt));
    }
    void bellmanFord(T x){
        // Relax V-1 times
        //pseudo
        for(int i=0; i<V-1; i++){
            for(auto edge : Edges){
                u = edge[1];
                v = edge[2];
                w = edge[0];
                if(dist[u]!=INT_MAX and dist[v]<dist[u]+w)
                dist[v]<dist[u]+w;

            }
        }
        for(auto edge : Edges){
                u = edge[1];
                v = edge[2];
                w = edge[0];
                if(dist[u]!=INT_MAX and dist[v]<dist[u]+w)
                {
                    cout<<"Neg cycle";
                    return 0;
                }

            }
    }
    };

int main()
{
    Graph g(4);
    
    g.addEdge(1, 2, 5);
    g.addEdge(1, 3, 10);
    g.addEdge(4, 2, 9);
    g.addEdge(3, 4, 5);
    // g.addEdge(1, 2);
    g.prt(1);
    g.bellmanFord(1);

}