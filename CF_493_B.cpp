#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    string str1 = "", str2 = "";
    ll sum1 = 0, sum2 = 0;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > 0)
        {
            sum1 += t;
            str1 += (t + '0');
        }
        else
        {
            sum2 += abs(t);
            str2 += (abs(t) + '0');
        }
    }
    if (sum1 > sum2)
    {
        cout << "first";
    }
    else if (sum1 < sum2)
    {
        cout << "second";
    }
    else
    {
        if (str1> str2 )
            cout << "first";
        else if (str1< str2 )
            cout << "second";
        else{
            if(t>0)
            cout << "first";
            else
            cout << "second";

        }
    }

    // cout << sum1 << " " << str1 << endl << sum2 << " " << str2;
}