#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int test;
    cin>>test;
    while(test--){
        ll n, k, s=1;
        cin>>n>>k;
        if(k<=n){
            if(n%k==0)
            s=n;
            else
            s=((n/k)+1)*k;
            // continue;
            if(s%n==0){
                cout<<s/n;
            }
            else{
                cout<<((s/n)+1);
            }
        }

        else if(n==1){
            cout<<k;
            // continue;
        }
        //  else if(n%k==0){
        //     cout<<n/k;
        // }
        else if(n<k){
            cout<<((k/n)+1);
        }
       cout<<endl;


    }
}