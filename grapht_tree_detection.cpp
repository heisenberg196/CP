#include<bits/stdc++.h>
using namespace std; 

template<typename T>
class Graph{

    map<T, list<T>> G;
    vector<T> ts;
    
    public:
        
        void addEdge(T x, T y){
            G[x].push_back(y);
            G[y].push_back(x);
        }         

        bool treeDetection(T x){
            map<T, T> parent;
            map<T, bool> visited;
            queue<T> q;
            q.push(x);
            visited[x] = true;

            for(auto x : G){
                parent[x.first] = x.first;
                visited[x.first] = false;
            }

            while (!q.empty())
            {
                T node = q.front();
                q.pop();
                
                for (auto nbr : G[node])
                {
                    if(visited[nbr]==true and parent[node]!=nbr ){
                        cout<<nbr<<" " <<node;
                        return false;
                    }
                    else if(!visited[nbr]){
                        visited[nbr] = true;
                        parent[nbr] = node;
                        q.push(nbr);
                    }
                }
                
            }
            return true;

            
            

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
    g.addEdge(3, 2);
    g.addEdge(4, 2);
    g.addEdge(5, 2);
    g.addEdge(5, 2);
    // g.addEdge(1, 2);
  



    g.prt(1);
    cout<<"DFS"<<endl;
    // g.dfs("chennai");
    cout<<g.treeDetection(6);


}