#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin>>n;
    ll a, t;
    cin>>a;
    t=a;
    map<int, string> x;
    string ans="";
    x[0]="";
    x[1]="";
    x[2]="2";
    x[3]="3";
    x[4]="322";
    x[5]="5";
    x[6]="53";
    x[7]="7";
    x[8]="7222";
    x[9]="7332";
    while(t!=0){
        int t2 = t%10;
        ans+=x[t2];
        t/=10;
        // cout<<"h";
    }

    sort(ans.begin(), ans.end());
    for (auto  it = ans.rbegin(); it != ans.rend(); it++)
    {
        cout<<*it;
    }
    
}