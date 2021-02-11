#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll pdt = 1;
    ll power = 0;
    int t;
    string sol = "";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 0)
        {
            
            cout << "hello "<<0;
            return 0;
        }
        else
        {
            int t2=t, c1=0;
            while (t2)
            {
                if(t2%10==0){
                    power++;
                }
                else if(t2%10==1 and c1==0){
                    c1++;
                    continue;
                }
                else if(t2%10>1  or(t2%10==1 and c1>0)){
                    sol+=t;
                    cout<<t;
                    cout<<sol;
                }
            t2/=10;

            }
        }
    }
                cout<<"blah";
    
    cout << sol;
    for (int i = 0; i < power; i++)
    {
        cout<<0;
    }
    

}