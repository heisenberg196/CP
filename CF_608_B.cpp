#include <bits/stdc++.h>
using namespace std;
#define ll long long

int len(int a){
    int num=0;
    while(a){
        num++;
        a=a/10;
    }
    return num;
}
map<string, int> ans;
int sub(string a, string b){
    int sum=0;
    if(ans.find(b)!=ans.end()){
        return ans[b];
    }
    for (int i = 0; i < a.size(); i++)
    {
        sum=sum+abs(a[i]-b[i]);
    }
ans[b]=sum;
    // cout<<sum<<" ";
    return sum;
    
}

int main(){
    string a, b;
    cin>>a>>b;
    int na = a.size(), fs=0, t=0;
    fs+=sub(a, b.substr(0, na));
    t=fs;
// cout<<abs(a[2-1]-b[2-1])
    for (int i = 1; i <= b.size()-na; i+=na)
    {
        t = t - abs(a[(i-1)%na]-b[i-1]) + abs(a[(i-1+na)%na]-b[i-1+na]);
        cout<<a[(i-1)%na]<<" "<<b[i-1]<<" "<<a[(i-1+na)%na]<<" "<<b[i-1+na]<<" "<<t<<" ";
        fs+=t;
        cout<<fs<<" ";
    }
    cout<<fs;
}