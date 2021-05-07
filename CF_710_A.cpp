#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    
    while(t--){
        double n, m, x;
        cin>>n>>m>>x;

        ll r, c;
        c = ceil(x/(n));
        r=x-(c-1)*n;

        // cout<<r<<" "<<c<<endl;
        cout<<setprecision(30)<<(ll)(r-1)*m+c<<endl;
    }
}