#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b>>n;
        int l=b;
        int x = a^b;
        if(n%3==0){
            cout<<a;
        }
        else if(n%3==1){
            cout<<b;
        }
        else
        cout<<x<<endl;
    }
}