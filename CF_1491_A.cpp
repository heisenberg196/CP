#include <bits/stdc++.h>
using namespace std;
#define ll long long

void comp(const void *ap, const void *bp)
{
    ap = (pair<int, int>*)ap; 
    bp = (pair<int, int>*)bp; 
  if ( *ap.second <  *bp.second ) return -1;
  if ( *ap.second == *bp.second ) return 0;
  if ( *ap.second >  *bp.second ) return 1;

}
int main()
{
    int n, q;
    set<pair<int, int>, greater<pair<int, int>>> s1;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int t1;
        cin >> t1;
        s1.insert({t1, i + 1});
    }
    for (auto x : s1)
    {
        cout << x.first << " " << x.second << endl;
    }
    for (int i = 0; i < q; i++)
    {
        int c, p;
        cin >> c >> p;
        if (c == 1)
        {
            bsearch(&p, s1.begin(), n, sizeof(pair<int, int>), comp);
        }
    }
}