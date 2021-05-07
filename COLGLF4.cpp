#include <bits/stdc++.h>
using namespace std;
#define ll long long

void omlette(int &e)
{
    e -= 2;
}
void shake(int &h)
{
    h -= 3;
}

void cake(int &e, int &h)
{
    e--;
    h--;
}

char cheapest_possible(int a, int b, int c, int e, int h)
{
    if (a <= b and a <= c)
    {
        if (e >= 2)
        {
            return 'o';
        }
        else
        {
            if (b < c)
            {
                if (h >= 3)
                    return 's';
                else
                    return 'c';
            }

            else
            {
                if(h>=1 and e>=1)
                return 'c';
                else return 's';
            }
        }
    }
    else if (b <= a and b <= c)
    {
        if (h >= 3)
        {
            return 's';
        }
        else
        {
            if (a < c)
            {
                if (e >= 2)
                    return 'o';
                else
                    return 'c';
            }
            else
            {
                if (e >= 1 and h >= 1)
                    return 'c';
                else
                    return 'o';
            }
        }
    }
    else
    {
        if (h >= 1 and e >= 1)
        {
            return 'c';
        }
        else
        {
            if (a < b)
            {
                if (e >= 2)
                    return 'o';
                else
                    return 's';
            }
            else
            {
                if (h >= 3)
                    return 's';
                else
                    return 'o';
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    // map<char, pair<int, char>> req;
    // req['c']={2, 'c'};
    // req['o']={2, 'c'};
    // req['s']={2, 'c'};

    while (t--)
    {
        int n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        if (e + h < 2 * n)
        {
            cout << "-1" << endl;
            continue;
        }
        int cost = 0;
        while (n)
        {
            char ans = cheapest_possible(a, b, c, e, h);
            if (ans == 's')
            {
                shake(h);
                cost += b;
            }
            else if (ans == 'o')
            {
                omlette(e);
                cost += a;
            }
            else
            {
                cake(e, h);
                cost += c;
            }
            // cout<<ans<<" "<<cost<<" ";
            n--;
        }
        cout << cost << endl;
    }
}