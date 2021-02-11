#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int m = max(max(a, b), c);
        cout<<m+1<<endl;
    }
}