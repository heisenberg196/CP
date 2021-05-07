#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // priority_queue<ll, greater<ll>> minor;

        priority_queue<ll>  mines, minor;
        // mines.
        for (int i = 0; i < 2*n; i++)
        {
            int t1, t2;
            cin>>t1>>t2;
            if(t1==0)
                minor.push(abs(t2));
            else
                mines.push(abs(t1));
        }
        double sum=0;
        // cout<<"*************** \n";
        // auto i = minor.begin();
        // auto j=mines.begin();
        while(!minor.empty() )
        {
            // cout<<*i<<" "<<*j<<endl;
            sum+= sqrtl(pow(minor.top(), 2)+ pow(mines.top(), 2));
            minor.pop();
            mines.pop();

        }
        cout<<setprecision(16)<<sum<<endl;

    }
}