#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int k;
    string a;
    cin >> a;
    int n = a.size();
    int cnt = 0;
    map<char, int> num_map;
    for (int i = 0; i < a.size(); i++)
    {
        num_map[a[i]]++;
    }
    for (auto i : num_map)
    {
        if (i.second % 2 == 1)
        {
            cnt++;
        }
    }
    int ans = 0;
    // if (n % 2 == 0)
    // {
        if (cnt % 2 == 0 and cnt>1)
        {
            cout << "Second";
        }
        else
        {
            cout << "First";
        }
    // }
    // else
    // {
    //     if (cnt % 2 == 0)
    //     {
    //         cout << "First";
    //     }
    //     else
    //     {
    //         cout << "Second";
    //     }
    // }
}