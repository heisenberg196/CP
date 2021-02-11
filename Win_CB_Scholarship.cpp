#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int currAns = min(m/x, n);
    
    
    
    
    if (currAns == n)
    {
        cout << currAns << endl;
        return 0;
    }
    m = m % x;
    // cout<<"mid ans"<<currAns<<endl;
    for (int i = currAns+1; i <= n; i++)
    {
     if(m<x){
         m+=y;
     }
     else{
        currAns++;
        m-=x;

     }                                                                                       
    }
    cout<<currAns;
    

}