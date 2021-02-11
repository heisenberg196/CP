#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int, int> a;
        for (int i = 0; i < n; i++)
            {
                int x;
                cin>>x;
                a[x]=1;
            }
        int q;
        cin>>q;
        for (int i = 0; i < q; i++)
        {
            int t;
            cin>>t;
            if(a.count((t))){
                cout<<"Yes \n";
            }
            else
            {
                cout<<"No \n";
            }
            
        }
        

    }
}