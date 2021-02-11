#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        pq.push(t);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<pq.top();
        pq.pop();
    }
    
}