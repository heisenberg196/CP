#include <bits/stdc++.h> 
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() { 
    int t;
    // cout<<"Enter Test cases : ";
    cin>>t;
    while(t--){
    bool ans = false;
    long long int N, X,K, Y;
    // cout<<"Enter vals    : ";

    cin>>N>>K>>X>>Y;
    if(K==0){
        if(X==Y)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    for(long long int i =0; i<N/K; i++){
        cout<<(X+K)%N;
        X=(X+K)%N;
        if((X+K)%N==Y){
            ans=true;
            break;
        }
    }
    if(ans)
            cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
  }  return 0; 
}   