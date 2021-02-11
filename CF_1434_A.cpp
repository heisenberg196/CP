#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6];
    for (int i = 0; i < 6; i++)
        cin >> a[i];

    int x;
    cin >> x;
    int b[x];
    for (int i = 0; i < x; i++)
        cin >> b[i];
    if(x==1){
        int min=INT_MAX;
        for (int i = 0; i < 6; i++)
    {
        
        if (b[x - 1] - a[i] > 0 && a[i] < min )
        {
            min = a[i];
        }
    }
    cout<<b[0]-min<<endl;
    return 0;
    }
    sort(a, a + 6);
    sort(b, b + x);
    // int min = INT_MAX, max1 = INT_MIN;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (b[0] - a[i] > 0 && a[i] > max1)
    //     {
    //         max1 = a[i];
    //     }
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     if (b[x - 1] - a[i] > 0 && a[i] < min && a[i]>=max1)
    //     {
    //         min = a[i];
    //     }
    // }
    // cout << max1 << " " << min << endl;
    // cout << b[x-1] << " " << b[0] << endl;

    // int ans = (b[x - 1] - max1) - (b[0] - min);
    int ans=INT_MAX;
    int c[6], d[6];
    for (int i = 0; i < 6; i++)
    {
        c[i]=b[0]-a[i];
        d[i]=b[x-1]-a[i];
    }
    
    cout<<c[2]<<" "<<d[2]<<endl;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(c[i]-d[j]>0 && c[i]-d[j]<ans)
                ans=c[i]-d[j];
        }
    }
    
    cout << ans;
}