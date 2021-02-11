#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    if (b < a)
    {
        int t;
        t = b;
        b = a;
        a = t;
    }
    long long int count=0;

    for(int i=1; i<=a; i++){
        double tc=0;
        tc = (double)(b-(5-(i%5)))/5;
        // cout<<tc<<endl;
        if(tc>=0){
            count = count + (tc)+1;
        }

        // cout<<" i = "<<i<<" count : "<<tc<<endl;
    }
    
    cout<<count<<endl;

}