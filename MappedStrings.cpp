#include <bits/stdc++.h>
using namespace std;

void solve(string n, string ans, int i, vector<string> &vec)
{
    if (i >= n.size())
    {
        ans += '\0';
        vec.push_back(ans);
        return;
    }

    if (n[i] == '0')
        solve(n, ans, i + 1, vec);

    char s = (int)(n[i] - '0') - 1 + 'A';
    // cout<<s<<" ";
    if (s <= 'Z' and s >= 'A')

        solve(n, ans + s, i + 1, vec);

    s = (int)(n[i] - '0') * 10 + (int)(n[i + 1] - '0') - 1 + 'A';
    // cout<<s<<" "<<((int)(n[i]-'0')*10 + (int)(n[i+1]-'0') -1)<<" ";
    // cout<<s<<endl;
    if (s <= 'Z' and s >= 'A')
    {
        solve(n, ans + s, i + 2, vec);
    }
}

int main()
{
    string n;
    cin >> n;
    // cout<<(char)(3-1+'A');
    vector<string> s;
    solve(n, "", 0, s);
    sort(s.begin(), s.end());
    for (auto i : s)
    {
        cout<<i<<endl;
    }
    
}