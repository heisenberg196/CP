#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, co=0;
    cin>>n;
    while (n--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if((a&&b) || (a&&c) || (b&&c))
        co++;
    }
    cout<<co;
    return 0;
}