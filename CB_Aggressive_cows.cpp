#include <bits/stdc++.h>
using namespace std;

bool possible(int val, int a[], int n, int c){
    int currval=a[0], currcow=1;
    for (int i = 1; i < n; i++)
    {
         if(a[i]-currval>=val){
            currcow++;
            currval=a[i];
         }
    }
    if(currcow>=c){
        return true;
    }
    else{
        return false;
    }
    
}

int main()
{
    int n, c;
    cin>>n>>c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    int mid, l=a[0], r=a[n-1], ans=INT_MIN;
    while (l<=r)
    {
        mid = (l+r)/2;
        if(possible(mid, a, n, c)){
            // cout<<mid;
            if(mid>ans)
                ans =mid;
            l=mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans;
    
    
}