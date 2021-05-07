#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin>>a[i];

        sort(a, a+n);
        ll sum=0;
        // cout<<a[0];
        sum = 2*a[n-1]-2*a[0];
        cout<<sum<<endl;
        
    }
}