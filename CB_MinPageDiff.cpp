#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[i] += t;
    }

    int lowest = INT_MAX, highest=0;
    for (int i = 0; i < n; i++)
    {
        int i2sum = a[i+1]-a[i];
        lowest = min(lowest, abs(i2sum-a[i]));
    }
    cout<<lowest;
    
}