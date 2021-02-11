#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[2 * n + 1];

    for (int i = 0; i < 2*n+1; i++)
        cin >> a[i];
    // int max = a[1];
    // for (int i = 3; i < 2 * n + 1; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         if (a[i] > max)
    //             max = a[i];
    //     }

    // }
    for(int i=2*n-1; i>=0; i-=2){
        if( k--)
            a[i]--;
    }
    for (int i = 0; i < 2*n+1; i++)
    {
        cout<<a[i]<<" ";
    }
    
}