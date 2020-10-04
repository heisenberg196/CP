#include<bits/stdc++.h>
using namespace std; 

template<typename T>
class Graph{

    map<T, list<T>> G;
    vector<T> ts;
    
    public:
        
        void addEdge(T x, T y){
            G[x].push_back(y);
        }

        // void topSortBfs(T x){
        //     map<T, bool> visited;
        //     map<T, int> inDeg;
        //     for(auto x : G){
        //         // cout<<x.first;
        //         T node = x.first;
        //         inDeg[node]=0;
        //     }

        //     // bfs for indegs
        //     queue<string> q;
        //     q.push(c);
        //     while(!q.empty()){
        //     for(auto nbr : l[q.front()]){
        //         inDeg[nbr.first];
        //     }
        //     q.pop();
        //     }
        //     //bfs end
            
        //     for(auto x : G){
            
        //         for(auto nbr : G[x.first]){
        //             inDeg[nbr]++;
        //         }
        //     }
        //     for(auto x : G){
        //         cout<<inDeg[x.first]<<" ";
        //     }
            
        // }

            

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
    g.topSortBfs(6);


}