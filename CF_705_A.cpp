#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, cnt=0;
        cin>>n>>k;
        // for (int i = k-1; i >=0; i--)
        // {
            
        // }
        cnt = ceil((k-1)/2.0);
        cnt = cnt + (n-k);
        cout<<cnt<<'\n';
        for (int i = k+1; i <= n; i++)
           cout<<i<<" ";

        for (int i = k-1; i >= ceil(k/2.0); i--)
        {
           cout<<i<<" ";
        }
               cout<<'\n'; 
        
    }
}