#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int tempMaxNum = a[0], tempMinNum = a[0], tempMaxRange = 1, MaxRange = INT_MIN;
    int maxnum[n], minnum[n];
    maxnum[0] = a[0];
    minnum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        maxnum[i] = max(maxnum[i - 1], a[i]);
        minnum[i] = max(minnum[i - 1], a[i]);
    }
    int mr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j =0 ; j < n; j++)
        {
            if ((maxnum[i] - minnum[j]) <= 1)
            {
                mr = max(mr, abs(j - i) );
            }
        }
    }

    cout << mr;
}