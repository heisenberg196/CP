#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;
    // int a[n];
    set<int> a;
    for(int i=0; i<n; i++)
        {
            int t;
            cin>>t;
            a.insert(t);
        }
    for (int i = 1; i <= n; i++)
    {
        sum+=((n-i+1)*i);
    }
    cout<<sum;
    
}