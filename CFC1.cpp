#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string s)
{
    int l = 0;
    int h = s.size() - 1;
  
    while (h > l)
    {
        if (s[l++] != s[h--])
        {
            
            return false;
        }
    }
    return true;
}


int main()
{
    string s;
    cin>>s;
    set<string> allpalls;
    int n = s.size();
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
           string subs = s.substr(i, j);
           if(isPalindrome(subs)==true){
            allpalls.insert(subs);
           }
        //    cout<<subs<<endl;
        }
    }
    cout<<allpalls.size();
}