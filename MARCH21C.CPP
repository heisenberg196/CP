#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, h, x;
    cin>>n>>h>>x;
    h = h-x;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        if(t>=h){
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    
}