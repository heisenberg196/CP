#include <bits/stdc++.h>
using namespace std;

void hanoi(char a, char b, char c, int n)
{
    if (n == 0)
        return;

    hanoi(a, c, b, n - 1);
    cout << "Moving ring " << n << " from " << a << " to " << c << endl;

    // cout<<"Moving ring "<<n<<"from "<<a<<" to "<<b<<endl;
    hanoi(b, a, c, n - 1);
    // cout<<"Moving ring"<<n<<"from"<<a<<" to "<<b<<endl;
}

// int main()
// {
//     int n;
//     cin >> n;
//     char a = 'A', b = 'B', c = 'C';
//     hanoi(a, c, b, n);
//     return 0;
// }

// Replace pi with 3.14

void replace(string s, string repl, int ind, string &ans)
{
    if (ind == s.size() - 1)
    {
        ans += s[ind];
        return;
    }

    if (s[ind] == 'p' && s[ind + 1] == 'i')
    {
        ans += repl;
        replace(s, repl, ind + 2, ans);
    }
    else
    {
        ans += s[ind];
        replace(s, repl, ind + 1, ans);
    }
}

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     string s, ans="";
//     cin>>s;
//     replace(s, "3.14", 0, ans);
//     cout<<ans<<endl;
// }}

// Subsequence abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd

int sum=0;
void solve(string s, int ind, string ans)
{
    if (ind >= s.size())
    {
        cout << ans<<" ";
        sum++;
        return;
    }
    solve(s, ind+1, ans+s[ind]);
    solve(s, ind+1, ans);
}

int main()
{
    string s;
    cin >> s;
    solve(s, 0, "");
    cout<<endl<<sum;
}