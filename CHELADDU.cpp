#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        long long int sum[n-k];
        for (int i = 0; i < n; i++)
            cin>>a[i];
        
        sort(a, a+n);
        k--;
        for(int i=0; i<n-k; i++){
            sum[i]=a[i+k]-a[i];
        }
        // for (int i = 0; i < n-k; i++)
        // {
        //     cout<<sum[i]<<endl;
        // }
        
        auto min = min_element(sum, sum+n-k);
        cout<<*min<<endl;
    
        
        
        
    }
}