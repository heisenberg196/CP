#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, q, gcd;
    cin >> n >> q;
    int a[n];
    cin >> a[0];
    gcd=a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        gcd = __gcd(gcd, a[i]);
    }
    // cout<<gcd;
    for (int i = 0; i < q; i++)
    {
        int m, x;
        cin>>m>>x;
        a[x]*=m;
    }
    
}