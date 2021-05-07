#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
        char last='0';
        for (int i = 0; i < s.size(); i++)
        {
            if(last=='0' and s[i]=='1'){
                cnt++;
                last='1';
            }
            last=s[i];
        }
        cout<<cnt<<endl;
    }
}