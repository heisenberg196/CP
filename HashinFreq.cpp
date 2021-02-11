#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, t;
    cin>>n;
    unordered_map<long long int, long long int> m;
    for(int i=0; i<n; i++){
        cin>>t;
        if(m.count(t)){
            m[t]++;
        }
        else{
            m[t]=1;
        }
    }
    int maxv=0, maxf=0;
    for (auto it : m){
        if(it.second>maxf){
            maxv=it.first;
            maxf=it.second;
        }
    }
    cout<<maxv;
    
    
}