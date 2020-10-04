#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 1;
    cin >> n;
    char a[n][n], t;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    t = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j || j == n - i - 1)
            {
                if (a[i][j] != t)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    t = a[0][1];
    if (a[0][1] == a[0][0])
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j || j == n - i - 1)
            {
                continue;
            }
            if (a[i][j] != t)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
}