#include <bits/stdc++.h>
using namespace std;


bool comp(string a, string b){
    int diff = a.compare(b);
    if(diff==0)
        return false;
    else if(diff>0){
        for (int i = 0; i < b.size(); i++)
        {
            if(a[i]!=b[i]){
                return a<b;
            }
        }
        return true;   
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]!=b[i]){
                return a<b;
            }
        }
        return false;   
    }
}

int main(){
    int n;
    cin>>n;
    string str[n];
    for (int i = 0; i < n; i++)
        cin>>str[i];

    sort(str, str+n, comp);

    for (int i = 0; i < n; i++)
    {
        cout<<str[i]<<endl;
    }
    

}