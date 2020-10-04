#include <bits/stdc++.h>
using namespace std;

class Graph{
    unordered_map<string, list<pair<string, int>>> l;

    public:

        void addEdge(string x, string y, bool bidir, int wt){
            l[x].push_back(make_pair(y, wt));
            if(bidir)
               l[y].push_back(make_pair(x, wt));
        }

        void prt(){
            for (auto p : l){
                string city = p.first;
                auto nbrs = p.second;
                cout<<p.first<<"->";
                for(auto nbr : nbrs){
                    cout<<nbr.first<<","<<nbr.second<<"->";
                }
                cout<<endl;
            }            
        }

        void bfs(string c){
            map<string, bool> visited;
            queue<string> q;
            q.push(c);
            visited[c]=true;
            while(!q.empty()){
            for(auto nbr : l[q.front()]){
                if(visited[nbr.first]==false){
                q.push(nbr.first);
            visited[nbr.first]=true;
                
                }
            }
            cout<<q.front()<<" ";
            q.pop();
}
        }
};

int main(){
    Graph g;
    g.addEdge("delhi", "ny", false, 10);
    // g.addEdge("chennai", "ny", true, 20);
    g.addEdge("chennai", "delhi", false, 30);
    g.addEdge("banglore", "ny", false, 40);
    g.addEdge("hyd", "banglore", false, 40);
    g.addEdge("chennai", "hyd", false, 40);
    g.addEdge("ny", "indore", false, 40);
    g.addEdge("delhi", "indore", false, 40);


    g.prt();
    g.bfs("ny");
    return 0;

}