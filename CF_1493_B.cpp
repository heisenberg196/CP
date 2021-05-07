#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkrev(string s, int hm, map<int, int> rev){

    int revt=0, mul=1;
        int shr, shm;
        shr = ((s[1]-'0')*10+(s[0]-'0'));
        smr = ((s[4]-'0')*10+(s[3]-'0'));
}

int main(){
    int t;
    cin>>t;
    map<int, int> rev;
    rev[0]=0;
    rev[1]=1;
    rev[2]=5;
    rev[5]=2;
    rev[8]=8;
    while(t--){
        int h, m, rh, rm;
        bool revsh, revsm;
        cin>>h>>m;
        string s;
        cin>>s;
        int sh,sm;
        sh = ((s[0]-'0')*10+(s[1]-'0'));
        sm = ((s[3]-'0')*10+(s[4]-'0'));
        cout<<sh<<":"<<sm<<endl;
        if(rev.find(sh%10)!=rev.end() and rev.find(sh/10)!=rev.end())
            revsh=true;
        if(rev.find(sm%10)!=rev.end() and rev.find(sm/10)!=rev.end())
            revsh=true;
        
        revsh = checkrev(s, h, rev);
        revsm = checkrev(s, m, rev);
    }
}