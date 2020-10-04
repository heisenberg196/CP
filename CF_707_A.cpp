#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, ans=0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char t;
            cin >> t;
            if (t == 'C' || t == 'M' || t == 'Y')
            {
                ans = 1;
            }
        }
    }
    if(ans==1)
        cout << "#Color" << endl;
    else if (ans==0)
        cout << "#Black&White" << endl;
}