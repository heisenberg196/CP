#include <bits/stdc++.h>
using namespace std;

int main()
{

    string x, ans = "";
    cin >> x;

    for (int i = 0; i < x.length(); i++)
    {
        if (i == 0 && x[0] == '9')
        {
            ans += x[i];

            continue;
        }

        if (((int)x[i] - '0' > 4))
        {
            ans += (9 - (int)(x[i] - '0')) + '0';
        }
        else
            ans += x[i];
    }
    cout << ans;
}