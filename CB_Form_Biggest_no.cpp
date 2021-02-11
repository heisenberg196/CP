#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return to_string(a) > to_string(b);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
          cin>>a[i];
        sort(a, a+n, comp);
        for(int i=0; i<n; i++)
        cout<<a[i];
        cout<<endl;        
    }
    

}
