#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        bool all_zero = true;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
                all_zero = false;
        }
        if (all_zero)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(a, a + n);
        for (int i = n - 1; i >= 0; i--){
            if(a[i]==0){
                swap(a[i], a[n-i-1]);

            }
            else 
                break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            sum += a[i];
            if (sum == 0)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;
        for (int i = n - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
}