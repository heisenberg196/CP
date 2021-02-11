#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int a[], int i, int x, int l, int r, int sum, int prev, int cnt)
{

    if (i < 0)
    {
        if (sum <= r and sum >= l and cnt > 1)
        {
            cout << sum << " ";
            return 1;
        }
        return 0;
    }
    // if (prev == -1)
    // {
    //     int k = 0;
    //     if (sum + a[i] <= r)
    //     {
    //         k = solve(a, i - 1, x, l, r, sum + a[i], a[i], cnt + 1);
    //         if (sum >= l)
    //         {
    //             k++;
    //         }
    //     }

    //     return k + solve(a, i - 1, x, l, r, sum, prev, cnt);
    // }

    // int k = 0;
    // if (sum + a[i] <= r and abs(prev - a[i]) >= x)
    // {
    //     k = solve(a, i - 1, x, l, r, sum + a[i], a[i], cnt + 1);
    //                if(sum>=l and k>0){
    //             k++;
    //         }
    // }
    // return k + solve(a, i - 1, x, l, r, sum, prev, cnt);

    int k=0;
    if(sum+a[i]<=r and (abs(a[i]-prev)>=x or prev==-1)){
        k = solve(a, i - 1, x, l, r, sum + a[i], a[i], cnt + 1);
    }
    if(sum>=l  and  cnt>1){
        k++;
    }
    return k + solve(a, i - 1, x, l, r, sum, prev, cnt);

}


int main()
{
    int n, x;
    ll l, r;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << (solve(a, n - 1, x, l, r, 0, -1, 0));
}