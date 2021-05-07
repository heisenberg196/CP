#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dp[1000000]={0};

ll solve(int a, int b, int cnt)
{
    if (a == 0)
    {
        return cnt;
    }
    // cout << "hello";
    int p1, p2;
    if (b > a)
    {
        return  cnt + 1;
    }
    if (b == 1)
    {
        return dp[a] = solve(a, b + 1, cnt + 1);
    }

    return dp[a] = min(solve(a / b, b, cnt + 1), solve(a, b + 1, cnt + 1));
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, cnt=0;
        cin >> a >> b;
        // cout << solve(a, b, 0);
        if(b==1){
            b++;
            cnt++;}
        ll ans= ceil(log(a)/log(b))+cnt;
        ll r = ans;
        while (r--)
        {
            cout<<"yo";
            b++;
            cnt++;
            ll k = (log(a)/log(b));
            ans = max(ans, k +cnt);
        }
        cout<<ans<<endl;
    }
}