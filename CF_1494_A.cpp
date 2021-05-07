#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(string s, int pos, int o, string vals)
{
    // cout<<pos;
    if (pos >= s.size() - 1)
    {
        // cout<<o;
        if (o == 0)
            return true;
        else
            false;
    }
    if (vals[s[pos] - 'A'] == '-')
    {
        string t1 = vals, t2 = vals;
        t1[s[pos] - 'A'] = '(';
        t2[s[pos] - 'A'] = ')';
        return solve(s, pos + 1, o + 1, t1) || solve(s, pos + 1, o - 1, t2);
    }
    else
    {
        if (vals[s[pos] - 'A'] == '(')
            return solve(s, pos + 1, o + 1, vals);
        else
            return solve(s, pos + 1, o - 1, vals);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t1 = "---", t2 = "---";
        t1[s[0] - 'A'] = '(';
        t1[s[s.size() - 1] - 'A'] = ')';
        t2[s[0] - 'A'] = '(';
        t2[s[s.size() - 1] - 'A'] = ')';
        if(s[0]==s[s.size() - 1]){
                            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < 3; i++)
        {
            if (t1[i] == '-')
            {
                t1[i] = '(';
                t2[i] = ')';
            }
        }
        // cout<<t1<<" "<<t2<<endl;
        int o = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (t1[s[i] - 'A'] == '(')
            {
                o++;
            }
            else
            {
                o--;
            }
            // cout<<o;
        }
            if (o == 0)
        {
            cout << "YES" << endl;
                        continue;

        }
        for (int i = 0; i < s.size(); i++)
        {
            if (t2[s[i] - 'A'] == '(')
            {
                o++;
            }
            else
            {
                o--;
            }
        }
        o = 0;
        if (o == 0)
        {
            cout << "YES" << endl;
                     continue;

        }
                cout << "NO" << endl;
                      continue;

    }
}