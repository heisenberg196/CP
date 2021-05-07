#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    for (int i = 10; i >=1 ; i--)
    {
        if(n%i==0){
            // cout<<"hello";
            cout<<i;
            return 0;
        }
        else
        continue;
    }
    
}