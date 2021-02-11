#include <bits/stdc++.h>
using namespace std;

int ct(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    else
    {
        int a = ct(n - 1); 
        int b = ct(n - 2);
        cout<<a<<" "<<b<<endl;
        return a+b;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << ct(n);
}