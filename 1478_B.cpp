#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int q, d;
        cin >> q >> d;
        ll a[q];
        for (int i = 0; i < q; i++)
            cin >> a[i];
        int maxdig = 0;
        while (a[q - 1] != 0)
        {
            a[q - 1] /= 10;
            maxdig++;
        }
        set<int> allLuckyNums;
        int num = d;
        while (num < a[q - 1])
        {
            allLuckyNums.insert(num);
            num += 10;
        }
        for (int i = 10; i <= maxdig + 1; i *= 10)
        {
            num = d * i;
            if (num > a[q - 1])
            {
                break;
            }
            for (int j = 0; j < i; j++)
            {
                num += j;
                allLuckyNums.insert(num);
            }

            // allLuckyNums.insert(num);
        }
        for (auto n : allLuckyNums)
        {
            cout << n;
        }
    }
}