#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ct=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int curr = a[0], currind = 0;
        for (int i = 0; i < n; i++)
        {
            int range = curr + currind;
            for (i += 1; i <= range; i++)
            {
                if (a[i] + i > curr)
                {
                    curr = a[i] + i;
                    currind = i;
                }
            }
            ct++;
        }
        cout<<ct<<endl;
    }
}