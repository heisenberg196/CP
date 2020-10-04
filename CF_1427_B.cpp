#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n, m;
        bool ans = false;
        cin>>n>>m;
        for(int i=0;i<n; i++){
            int a, b, c, d;
            cin>>a>>b;
            cin>>c>>d;
            if(a==d && b==c)
                ans=true;
        }
        if(ans){
            cout<<"YES"<<endl;
        
        }
        else 
            cout<<"NO"<<endl;
    }

    return 0;


}