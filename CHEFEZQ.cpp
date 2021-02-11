#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int T;
    cin>>T;
    while(T--){
        long long int n, k, b=0, ans=-1;
        cin>>n>>k;

        long long int a[n];
        for(long long int i=0; i<n; i++)
            cin>>a[i];

        for(long long int i=0; i<n; i++){
            
            if(a[i]+b>=k)                
                b=a[i]+b-k;
            else{
                b=0;
                ans=i;
                break;
            }
        }
     cout<<endl;
        if(ans!=-1)
            cout<<ans+1;
        else
            cout<<((b/k)+1+n);

    }
}