#include<bits/stdc++.h>
using namespace std;

string stringtokenizer(string str, int k){
    char *s = strtok((char *) str.c_str(), " ");
    while(k > 1){
        s = strtok(NULL, " ");
        k--;
    }
    return string(s);
}

bool ncomp(pair<string, string> s1, pair<string, string> s2){
    return  stoi(s1.second) <  stoi(s2.second);
}

bool lcomp(pair<string, string> s1, pair<string, string> s2){
    return s1.second < s2.second;
}

int main(){
    int n;
    cin>>n;
    cin.get();
    string a[n];
    for (int i = 0; i < n; i++)
        getline(cin, a[i]);
    
    int k;
    cout<<"Enter col";
    cin>>k;
    pair<string, string> as[n];
    for (int i = 0; i < n; i++)
        as[i] = (make_pair(a[i], stringtokenizer(a[i], k)));

    bool reversal, numeric;
    cout<<" numeric(otherwise lexicographical) ? ";
    cin>>reversal>>numeric;

    if(numeric){
        sort(as, as+n, ncomp);
    }
    else
        sort(as, as+n, lcomp);

    for (int i = 0; i < n; i++)
    {
        cout<<as[i].first<<" ";
    }
    

        
}