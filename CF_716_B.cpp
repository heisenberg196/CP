#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    char s[1000];
    cin>>s;
    cout << s.length();
    if (s.length() < 26)
    {
        cout << "-1";
        return 0;
    }
    int arr[26] = {0};
    int qcnt = 0, remcnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (s[i] == '?')
            qcnt++;
        else
            arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            remcnt++;
        }
    }

    for (int i = 26; i < s.length(); i++)
    {

        if (remcnt == qcnt)
        {
            cout << "yes " << i;
            break;
        }
        else
        {
            if (s[i] == '?')
            {
                remcnt++;
            }
            else
            {
                --arr[s[i - 26] - 'a'];
                arr[s[i] - 'a']++;
                if (arr[s[i - 26] - 'a'] == 0)
                {
                    remcnt++;
                }
                if (arr[s[i] - 'a'] == 1)
                {
                    remcnt--;
                }
            }
        }
    }
}