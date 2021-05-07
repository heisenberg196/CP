#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, t;
    cin >> n;
    t = n;
    set<int> pfs;
    while (n % 2 == 0)
    {
        pfs.insert(2);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(t); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i;
            pfs.insert(i);
            n = n / i;
        }
    }
    ll ans = 1;
    cout << endl;
    for (auto x : pfs)
    {
        // cout<<x;
        ans *= x;
    }
    cout << ans;

    // Print the number of 2s that divide n
    // while (n % 2 == 0)
    // {
    // 	cout << 2 << " ";
    // 	n = n/2;
    // }

    // // n must be odd at this point. So we can skip
    // // one element (Note i = i +2)
    // for (int i = 3; i <= sqrt(n); i = i + 2)
    // {
    // 	// While i divides n, print i and divide n
    // 	while (n % i == 0)
    // 	{
    // 		cout << i << " ";
    // 		n = n/i;
    // 	}
    // }

    // // This condition is to handle the case when n
    // // is a prime number greater than 2
    // if (n > 2)
    // 	cout << n << " ";
}