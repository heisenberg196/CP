#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        if (n == 2)
        {
            cout << "2 \n2 1 \n";
            continue;
        }
        cout << "2" << endl;

        int a, b;
        a = n;
        b = n - 2;
        cout << a << " " << a - 2 << endl;
        cout << a - 1 << " " << a - 1 << endl;
        // a = n-1;
        a--;
        b = n - 3;
        n -= 2;
        while (--n)
        {
            cout << a << " " << b << endl;
            a--;
            b--;
        }
    }
}