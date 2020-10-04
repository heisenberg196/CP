#include<bits/stdc++.h>
using namespace std; 

template<typename T>
class Graph{
    map<T, list<T>> G;
    public:
        void addEdge(T x, T y){
            G[x].push_back(y);
            G[y].push_back(x);

        }

        // isCyclic(){

        // }
        
  
        bool cycleUtil(T node, map<T, bool> &visited, T parent){
            visited[node] = true;

            for(T nbrs : G[node]){
                if(!visited[nbrs]){
                   if ( cycleUtil(nbrs, visited, node)){
                       cout<<nbrs<<" "<<node<<" cycle "<<endl;
                       return true;
                   }
                }
                else if(nbrs != parent){

                       cout<<nbrs<<" "<<node<<" cycle "<<endl;

                    return true;
                }
            }
            return false;

        }
        void isCycle(T node){
            map<T, bool> visited;
            for(auto v : G ){
                visited[v.first]=false;
            }
            // for(auto v : G ){
            //     cout<<v.first;
            // }
            
            cout<<cycleUtil(node, visited, "abc");
        }
        
      void dfsUtil(T node, map<T, bool> &visited){
            visited[node] = true;
            cout<<node<<" ";
            for(T nbrs : G[node]){
                if(!visited[nbrs]){
                    dfsUtil(nbrs, visited);
                }
            }

        }

        void dfs(T src){
            map<T, bool> visited;
            dfsUtil(src, visited);
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
     Graph<string> g;
    g.addEdge("delhi", "ny");
    // g.addEdge("chennai", "ny", true, 20);
    g.addEdge("chennai", "delhi");
    g.addEdge("banglore", "ny");
    g.addEdge("hyd", "banglore");
    // g.addEdge("chennai", "hyd");
    // g.addEdge("ny", "indore");
    g.addEdge("delhi", "indore");


    g.prt("ny");
    cout<<"DFS"<<endl;
    // g.dfs("chennai");
    g.isCycle("chennai");


}