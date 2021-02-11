#include <bits/stdc++.h>
using namespace std;


int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        pq.push(t);
    }
    int ans=0;
    while(true)
    {
        int ts=0;
        ts = pq.top();
        pq.pop();
        if(pq.size()==0)
        break;
        ts+=pq.top();
        pq.pop();
        pq.push(ts);
        ans+=ts;
    }
    cout<<ans;
    
}