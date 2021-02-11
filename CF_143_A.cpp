#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a, b, c, d;
    a = (d1 - c2 + r1) / 2;
    b = (r1 - d1 + c2) / 2;
    c = (2 * d2 - r1 + d1 - c2) / 2;
    d = (d1 + c2 - r1) / 2;
    if(a<1 || b<1 || c<1 || d<1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout << a << " " << b << endl
         << c << " " << d << endl;
}