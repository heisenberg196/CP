#include<bits/stdc++.h>
using namespace std;


void solve(string s, string ans, int i, set<string> &fset){
    if(i>=s.size()){
        ans+='\0';
        fset.insert(ans);
        // cout<<ans<<endl;
        return;
    }
        solve(s, ans+s[i], i+1, fset);
        solve(s, ans, i+1, fset);
    


}

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    set<string> ans;
   

    solve(s, "", 0, ans);
    cout<<ans.size()<<endl;
}
    // for (auto i : a)
    // {
    //     string str = "";
    //     for(int j=0; j<table[i].size(); j++){
    //         str+=table[i][j];
    //     }
    //     str+='\0';
    //     ans.insert(ans.begin(), str);
    // }
    
    // for (auto i : ans)
    // {
    //     cout<<i<<endl;
    // }
    
    
}
