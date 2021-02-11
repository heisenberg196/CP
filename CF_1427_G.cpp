#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void calc(int n, int i, int j, ll *a)
{

    if (*((a + i * n) + j) == 0)
    {
        long double sum = 0, count = 0;
        if (*((a + i * n) + j + 1) && *((a + i * n) + j + 1) != -1 && *((a + i * n) + j + 1) != 0)
        {
            sum += *((a + i * n) + j + 1);
            count++;
        }
        if (*((a + i * n) + j - 1) && *((a + i * n) + j - 1) != -1 && *((a + i * n) + j - 1) != 0)
        {
            sum += *((a + i * n) + j - 1);
            count++;
        }
        if (*((a + i * n) + j + n) && *((a + i * n) + j + n) != -1 && *((a + i * n) + j + n) != 0)
        {
            sum += *((a + i * n) + j + n);
            count++;
        }
        if (*((a + i * n) + j - n) && *((a + i * n) + j - n) != -1 && *((a + i * n) + j - n) != 0)
        {
            sum += *((a + i * n) + j - n);
            count++;
        }
        *((a + i * n) + j) = round(sum / count);
    }
}

int main()
{
    int n;

    cin >> n;
    int x=n;
    ll a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // if (a[i][j] == 0)
            // {
            //     ll sum = 0, count = 0;
            //     if (a[i][j + 1] && a[i][j + 1] != -1 && a[i][j + 1] != 0)
            //     {
            //         sum += a[i][j + 1];
            //         count++;
            //     }
            //     if (a[i][j - 1] && a[i][j - 1] != -1 && a[i][j - 1] != 0)
            //     {
            //         sum += a[i][j - 1];
            //         count++;
            //     }
            //     if (a[i + 1][j] && a[i + 1][j] != -1 && a[i + 1][j] != 0)
            //     {
            //         sum += a[i+1][j];
            //         count++;
            //     }
            //     if (a[i-1][j] && a[i-1][j] != -1 && a[i-1][j] != 0)
            //     {
            //         sum += a[i-1][j];
            //         count++;
            //     }
            //     a[i][j] = round(sum/count);
            // }
        }
    }
    int i, k = 0, l = 0;

    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < n && l < n)
    {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i)
        {
            calc(n, k, i, &a[0][0]);
        }
        k++;

        /* Print the last column
         from the remaining columns */
        for (i = k; i < n; ++i)
        {
            calc(n, i, n - 1, &a[0][0]);
        }
        n--;

        /* Print the last row from
                the remaining rows */
        if (k < n)
        {
            for (i = n - 1; i >= l; --i)
            {
                calc(n, n - 1, i, &a[0][0]);
            }
            n--;
        }

        /* Print the first column from
                   the remaining columns */
        if (l < n)
        {
            for (i = n - 1; i >= k; --i)
            {
                calc(n, i, l, &a[0][0]);
            }
            l++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}