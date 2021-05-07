#include <bits/stdc++.h>
using namespace std;
#define ll long long

void putstar(string s, int f, int l, int i, int k, int &cnt){
    cout<<"h";
    if(i>=l){
        if(l-f<k){
            cnt++;
        }
        return;
    }
    if(i-f>=k)
        return;
    if(s[i]=='.'){
        putstar(s, f, l, i+1, k,  cnt);
    }
    else{
        putstar(s, i, l, i+1, k,  cnt);
        if(i-f<k)
            putstar(s, f, l, i+1, k,  cnt);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int f=-1, l=-1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='*'){
                l=i;
                if(f==-1)
                f=i;
            }
        }
        cout<<"start "<<f<<" end "<<l<<endl;
        int cnt=0;
        putstar(s, f, l, f+1, k, cnt);
        cout<<cnt;
    }
}