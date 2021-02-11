#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sieve(bool hash[], int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (hash[i])
            for (int j = i + i; j <= n; j += i)
            {
                hash[j] = false;
            }
    }
}

int divisors(int d, bool hash[], int n)
{
    int total = 1;
    for (int i = 2; i <= n and d != 1; i++)
    {
        if (hash[i])
        {
            int cnt = 0;
            if (d % i == 0)
            {
                while (d % i == 0)
                {
                    d /= i;
                    cnt++;
                }
            }
            total *= (cnt + 1);
        }
    }
    return total;
}

int main()
{
      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int n = a * b * c;
    bool hash[n + 1] = {true};
    memset(hash, true, sizeof(hash));
    sieve(hash, n);
    ll divs[n + 1]={0};
    // memset(divs, 2, sizeof(divs));
    // divs[0] = 0;
    // divs[1] = 1;
    // // cout<<"hello";

    //     for (int i = 2; i <= a*b*c; i++)
    // {
    //     divs[i]=1;
    //     // cout<<divs[i]<<" ";
    // }

    // for (int i = 2; i <= n; i++)
    // {
    //     divs[i]=divisors(i, hash, n);
    // }
    // for (int i = 0; i <= a * b * c; i++)
    // {
    //     cout << divs[i] << " ";
    // }
    ll sum = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                if(divs[i*j*k]!=0)
                sum += divs[i * j * k];
                else
                {
                    divisors(i*j*k, hash, n);
                }
            }
        }
    }
    sum%=1073741824;
    cout << sum;
}
