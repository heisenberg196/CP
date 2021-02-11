#include <bits/stdc++.h>
using namespace std;

// class Graph
// {

//     map<int, list<int>> G;
//     vector<int> ts;

// public:

//     void addEdge(int x, int y)
//     {
//         G[x].push_back(y);
//         G[y].push_back(x);
//     }

//     void dijkstra(int src)
//     {
//         set<pair<int, int>> s;
//         unordered_map<int, int> dist;
//         for(auto i : G){
//             dist[i.first] = INT_MAX;
//         }
//         dist[src] = 0;
//         s.insert(make_pair(0, src));

//         while(!s.empty()){
//             auto n = *(s.begin());
//             int node = n.second;
//             s.erase(s.begin());
//             for(auto nbr : G[node]){
//                 if(n.first + nbr.second < dist[nbr.first]){
//                     auto f = s.find(make_pair(dist[nbr.first], nbr.first));
//                     if(f!=s.end()){
//                         s.erase(f);
//                     }
//                     dist[nbr.first] = n.first + nbr.second;
//                     s.insert(make_pair(dist[nbr.first], nbr.first));
//                 }
//             }
//         }
//         cout<<"\n Dijkstra \n";
//         for (auto i : G)
//         {
//             auto x  = dist[i.first];
//             cout<<i.first<<" "<<x<<endl;
//         }

//     }

class Graph{
    map<int, list<int>> G;
    public:

        void AddEdge(int a, int b){
            G[a].push_back(b);
            G[b].push_back(a);
        }

        void djikstra(int src){
            set<pair<int, int>> s;
            unordered_map<int, int> dist;
            for (auto i : G)
                dist[i.first]=INT_MAX;
            dist[src]=0;
            s.insert(make_pair(0, src));
            while (!s.empty())
            {
                auto n = *(s.begin());
                int node = n.second;
                s.erase(s.begin());
                for (auto nbr: G[node])
                {
                    
                    if(n.first + 1< dist[nbr.first]){

                    }

                }
                
            }
            
            
        }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Graph G;
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            G.AddEdge(a, b);
        }
        int sn[k];
        for (int i = 0; i < k; i++)
            cin >> sn[k];

        int q;
        cin >> q;
        int queries[q];
        for (int i = 0; i < q; i++)
            cin >> queries[k];
        
        
    }
}
