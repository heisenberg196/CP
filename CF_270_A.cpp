#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double a;
        cin>>a;
        int ans;
        
        if((360/(180-a))==floor(360/(180-a))){
            cout<<"YES"<<endl;
        }
        else 
        cout<<"NO"<<endl;
    }
}