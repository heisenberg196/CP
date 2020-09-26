#include <bits/stdc++.h>

using namespace std;

void insBelow(vector<int> &s, int x){
    if(s.empty()){
        s.push_back(x);
        return;

    }
    int y = s.at(s.size()-1);
    s.pop_back();
    insBelow(s, x);
    s.push_back(y);
    return;

    
}

void recRev(vector<int> &s){
    if(s.empty())
    return;
    int x = s.at(s.size()-1);
    s.pop_back();
    recRev(s);
    insBelow(s, x);

}

int main(){
    vector<int> s;
    int d;

    while(true){
        cin>>d;
        if(d==-1)
            break;
        s.push_back(d);
    }
     for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    recRev(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
}