#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        long long int pa;
        bool ans = false;
        pa = (2 * a) / 3;
        if (pa == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        cout<<pa<<" ";
        if (b % pa >= (pa / 2))
            ans = true;

        pa = a + (2 * a) / 3;
        cout<<pa<<endl;

        if (pa == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (b % pa >= (pa / 2))
            ans = true;

        if (ans == true)
            cout << "YES" << endl;
        else if (ans == false)
            cout << "NO" << endl;
    }
}