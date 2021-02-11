#include <bits/stdc++.h>
using namespace std;

bool solve(int a[], int n, int ans, int i){
    if(i>=n){
        return false;
    }
    // cout<<ans<<" "<<a[i]+ans<<" "<<i<<endl;
    if(a[i]+ans==0){
        return true;
    }
    if(solve(a, n, a[i]+ans, i+1) or solve(a, n, ans, i+1))
    return true;
    else
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) 
        {
            cin>>a[i];
        }
        bool ans = solve(a, n, 0, 0);
        if(ans==true)
            cout<<"YES \n";
        else
            cout<<"NO\n";
        
    }
}