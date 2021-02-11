#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>> l;
    public:
        Graph(int V){
            this->V = V;
        }
    
        void addEdge(int u, int v){
            l.push_back(make_pair(u, v));
            }
    
        int findSet(int x, int parent[]){
            if(parent[x]==-1)
                return x;

            else 
                return findSet(parent[x], parent);

        }

        bool make_union(int u, int v, int parent[]){
            
            int up = findSet(u, parent);
            int vp = findSet(v, parent );
            
            if (up!=vp)
            {
                parent[up]=vp;
                return true;
            }
            return false;
        }

        void  cycle(){
            int parent[this->V];
            cout<<"X \n";
            for(int i=0; i<V; i++){
                parent[i] = -1;
            }
            cout<<"X \n";

            for(auto edge : l){
                cout<<edge.first<<edge.second<<endl;
                int i = findSet(edge.first, parent);
                int j = findSet(edge.second, parent);
                if(i!=j){

                    make_union(edge.first, edge.second, parent);
                }
                else {
            cout<<"Cycle";
                }
            }
            cout<<"No Cycle";
            return;            
        }   
};

int main(){

    Graph G(5);
    G.addEdge(0, 1);
    G.addEdge(1, 2);
    G.addEdge(3, 4);
    G.addEdge(4, 5);
    G.cycle();

}










