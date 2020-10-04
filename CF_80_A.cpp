#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    bool prime[m+1];
    memset(prime, 1, m+1);

    for(int i=2; i<m+1; i++){
        for(int j=i+i; j<m+1; j+=i){
            prime[j]=0;
        }
    }

    // for(int i=0; i<m/2; i++){
    //     if(prime[i]==1)
    //         cout<<i<<" is prime \n";
    //     else
    //         cout<<i<<" is not prime \n";
    // }

    for(int i=n+1; i<=m; i++){
        if(prime[i]==1){
            cout<<"YES";
            return 0;
            }
    }
    cout<<"NO";
}