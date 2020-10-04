#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{

    map<T, list<pair<T, int>>> G;
    vector<T> ts;

public:

    void addEdge(T x, T y, int wt)
    {
        G[x].push_back(make_pair(y, wt));
        G[y].push_back(make_pair(x, wt));
    }

    void dijkstra(T src)
    {
        set<pair<int, T>> s;
        unordered_map<T, int> dist;
        for(auto i : G){
            dist[i.first] = INT_MAX;
        }
        dist[src] = 0;
        s.insert(make_pair(0, src));
        
        while(!s.empty()){
            auto n = *(s.begin());
            T node = n.second;
            s.erase(s.begin());
            for(auto nbr : G[node]){
                if(n.first + nbr.second < dist[nbr.first]){
                    auto f = s.find(make_pair(dist[nbr.first], nbr.first));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[nbr.first] = n.first + nbr.second;
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
        map<T, bool> V;
        for (auto l : G)
        {
            // cout<<l.first<<endl;
            T node = l.first;
            cout << node << "->";
            for (auto nbr : G[l.first])
            {
                cout << nbr.first << " ";
            }
            cout << endl;
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
    // g.addEdge(1, 2);
    g.prt(1);
    g.dijkstra(1);

}