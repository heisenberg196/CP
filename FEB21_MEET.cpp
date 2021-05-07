#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        char mt[100];
        // getline(cin, mt);
        cin.getline(mt, 100);
        cout << mt;
        string s1;
        int mthrs;
        int mtmin;
        mthrs = stoi(mt[0]+mt[1]);
        cout<<mthrs;
        // string s1=mt.substr(0, 2), s2=mt.substr(2, 2);
        // cout<<s1<<s2;
        // int mthrs = stoi(mt.substr(0, 2));
        // int mtmin = stoi(mt.substr(2, 2));
        // if (mt.substr(6, 2)== "PM" == 0)
        // {
        //     mthrs += 12;
        // }
        // ll n;
        // cin >> n;
        // string str;
        // string ans="";
        // for (int i = 0; i < n; i++)
        // {
        //     getline(cin, str);

        //     int shrs = stoi(str.substr(0, 2));
        //     int smin = stoi(str.substr(3, 2));
        //     int ehrs = stoi(str.substr(9, 2));
        //     int emin = stoi(str.substr(12, 2));

        //     if (mt.substr(6, 2)=="PM")
        //         shrs += 12;
        //     if (mt.substr(15, 2)=="PM")
        //         ehrs += 12;
        //     if(shrs<=mthrs and mthrs<=ehrs and smin<=mtmin and mtmin<=emin){
        //         cout<<"1";
        //         ans+="1";
        //     }
        //     else{
        //         cout<<"0";
        //         ans+="0";
        //     }
        // }
        // cout<<ans<<endl;
    }
}