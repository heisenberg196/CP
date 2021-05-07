#include <bits/stdc++.h>
using namespace std;
#define ll long long

string tobin(int c)
{
        cout<<"h";

    string ans = "";
    for (int i = 0; i < 32; i++)
    {
        if (c & 1)
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
        c = c >> 1;
    }
    for (int i = 0; i < 16; i++)

    {
        char t = ans[i];
        ans[i] = ans[31 - i];
        ans[31 - i] = t;
    }

    return ans;
}

ll solve(string cs, int pos, string s1, string s2)
{

        cout<<"pos "<<pos;

    if (pos >= 32)
    {   
        ll a = stol(s1, nullptr, 2);
        ll b = stol(s2, nullptr, 2);
        cout<<a<<" "<<b<<endl;
        return a*b;
    }
    else if (cs[pos] == '1')
    {
        string t1 = s1, t2 = s2, t3 = s1, t4 = s2;
        t1[pos] = '1';
        t2[pos] = '0';
        t3[pos] = '0';
        t4[pos] = '1';
        pos=pos+1;
        return max(solve(cs, pos, "1"+s1, "0"+s2), solve(cs, pos, "0"+s1, "1"+s2));
    }
    else{
        string t1 = s1, t2 = s2, t3 = s1, t4 = s2;
        t1[pos] = '1';
        t2[pos] = '1';
        t3[pos] = '0';
        t4[pos] = '0';
        pos=pos-1;

        return max(solve(cs, pos, "1"+s1, "1"+s2), solve(cs, pos, "0"+s1, "0"+s2));
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<"h";
        int c;
        cin >> c;
        string cs = tobin(c);
        cout << cs<<endl;
        cout<<stol(cs, nullptr, 2);
        cout <<"ans "<< solve(cs, 0, "", "");
    }
}