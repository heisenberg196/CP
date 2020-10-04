#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, ans=1;
    cin>>n;
    if(n%2==1)
    ans*=-1;
    n = (n+1)/2;
    ans*=n;
    cout<<ans;
}