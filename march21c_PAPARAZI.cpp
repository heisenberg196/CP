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
        float a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cp = 0, i = 2, ans = 1;

        float slope;
        // slope = (a[2]-a[0])/2;
        // cout<<slope<<" t \n";
        slope = abs(a[1] - a[0]) / 1.0;
        // cout << slope << " ";
        while (i < n)
        {
            cout<<"h";
            float ts;
            ts = ((a[i] - a[cp]) * (1.0)) / (abs(i - cp) * 1.0);
            cout << ts << " ";
            if (ts >= slope)
            {
                // cout<<i<<" "<<cp<<" ";
                slope = ts;
                ans = max(ans, (i - cp));
                // cp=i;
            }
            else{
                cp = i-1;
            slope = ((a[i] - a[cp]) * (1.0)) / (abs(i - cp) * 1.0);
                
                }
            i++;
        }
        cout<< ans<< endl;
    }
}