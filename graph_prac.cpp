#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{

map<T, list<pair<T, int>>> G;
public:

    void addEdge(T x, T y, int wt)
    {
        G[x].push_back(make_pair(y, wt));
        G[y].push_back(make_pair(x, wt));
    }

    void dijsktra(T src){
        map<T, bool> visited;
        map<T, int> dist;
        set<pair<int, T>> s;
        for(auto i : G){
            dist[i.first] = INT_MAX;
        }
        dist[src] = 0;
        s.insert(make_pair(0, src));
        cout<<(*s.begin()).first;
        while(!s.empty()){
            auto parent_node = *(s.begin());
            s.erase(s.begin());
            for(auto nbr : G[parent_node.second]){
            if(parent_node.first + nbr.second < dist[nbr.first]){
                 auto f = s.find(make_pair(dist[nbr.first], nbr.first));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                dist[nbr.first] = parent_node.first + nbr.second;
                s.insert(make_pair(dist[nbr.first], nbr.first));
            }
            }
        }
         cout<<"\n Dijkstra \n";
        for (auto i : G)
        {
            auto x  = dist[i.first];
            cout<<i.first<<" "<<x<<endl;
        }
    }

      void prt(T x)
    {
        map<T, bool> vis;
        for (auto i : G)
        {
            for(auto j : i.second){
                if(vis[j.first]==false)
                    cout<<j.first;
                vis[j.first]=true;
            }
        }
        
    }
};


int main()
{
    Graph<int> g;
    g.addEdge(1, 2, 5);
    g.addEdge(1, 3, 10);
    g.addEdge(4, 2, 9);
    g.addEdge(3, 4, 5);
    g.addEdge(4, 5, 3);
    g.addEdge(3, 5, 10);
    g.addEdge(6, 5, 3);
    g.addEdge(6, 2, 20);
    // g.addEdge(1, 2);
    g.dijsktra(1);
    g.prt(1);
}