#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    priority_queue <int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            {
                int t;
                cin>>t;
                pq.push(t);
            }
    for (int i = 0; i < n*k; i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
   
}