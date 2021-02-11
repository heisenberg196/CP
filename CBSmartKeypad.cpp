// #include<bits/stdc++.h>
// using namespace std;

// string TABLE[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

// void solve(vector<int> a, string ans, int i=0){
//     if(i>=a.size()){
//         ans+='\0';
//         cout<<ans<<endl;
//         return;
//     }
//     for (int j = 0; j < TABLE[a[i]].size(); j++)
//     {
//         solve(a, ans+TABLE[a[i]][j], i+1);
//     }
    


// }

// int main(){
//     int n;
//     cin>>n;
//     vector<string> ans;
    
//     vector<int> a;
//     while(n>0){
//         a.insert(a.begin(), n%10);
//         n/=10;
//     }

//     solve(a, "", 0);

//     // for (auto i : a)
//     // {
//     //     string str = "";
//     //     for(int j=0; j<table[i].size(); j++){
//     //         str+=table[i][j];
//     //     }
//     //     str+='\0';
//     //     ans.insert(ans.begin(), str);
//     // }
    
//     // for (auto i : ans)
//     // {
//     //     cout<<i<<endl;
//     // }
    
    
// }

// Smart Keypad

#include<bits/stdc++.h>
using namespace std;

string TABLE[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string searchIn[] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"};
void solve(vector<int> a, string ans, int i=0){
    if(i>=a.size()){
        ans+='\0';
        cout<<ans<<" ";
        // cout<<"x";
        for (int j = 0; j < 11; j++)
        {
            int c=0;
                cout<<"Matching "<<ans<<" "<<searchIn[j]<<" ";

            for (int k = 0; k < ans.size(); k++)
                for (int l = 0; l < searchIn[j].size(); l++)
                    if(ans[k]==searchIn[j][l])
                        c++;
            if(c==ans.size())
                cout<<searchIn[j]<<endl;   
        }
        return;
    }
    for (int j = 0; j < TABLE[a[i]].size(); j++)
    {
        // cout<<"x";
        solve(a, ans+TABLE[a[i]][j], i+1);
    }
}

int main(){
    string s;
    cin>>s;
    vector<string> ans;
    
    vector<int> a;
    for (int i = 0; i < s.size(); i++)
    {
        a.push_back((int)(s[i]-'0'));
    }
        // cout<<a[1];

    solve(a, "", 0);

    // for (auto i : a)
    // {
    //     string str = "";
    //     for(int j=0; j<table[i].size(); j++){
    //         str+=table[i][j];
    //     }
    //     str+='\0';
    //     ans.insert(ans.begin(), str);
    // }
    
    // for (auto i : ans)
    // {
    //     cout<<i<<endl;
    // }
    
    
}