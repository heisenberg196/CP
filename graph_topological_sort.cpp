#include<bits/stdc++.h>
using namespace std; 

template<typename T>
class Graph{
    map<T, list<T>> G;
    vector<T> ts;
    public:
        void addEdge(T x, T y){
            G[x].push_back(y);
            // G[y].push_back(x);


        }

        void topSortUtil(T x, map<T, bool> &visited){
            
            visited[x]=true;
            for(T nbrs : G[x]){
                if(!visited[nbrs]){
                    topSortUtil(nbrs, visited);
                }
            }
            ts.insert(ts.begin(), x);
        }

        void topSort(T x){
            map<T, bool> visited;
            topSortUtil(x, visited);
            cout<<"TS"<<endl;
            for(auto t : ts){
                cout<<t<<" ";
            }
        }

        void prt(T x){
            map<T, bool> V;
            for(auto l : G){
                // cout<<l.first<<endl;
                T node = l.first;
                cout<<node<<"->";
                for(auto nbr : G[l.first]){
                    cout<<nbr<<" ";
                }
                cout<<endl;
            }
        }
};


int main(){
     Graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(5, 3);
    g.addEdge(6, 1);
    g.addEdge(6, 5);
    // g.addEdge(1, 2);



    g.prt(1);
    cout<<"DFS"<<endl;
    // g.dfs("chennai");
    g.topSort(6);


}