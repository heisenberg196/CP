#include <bits/stdc++.h>
using namespace std;

// bool comp(char a, char b)
// {
//     return a < b;
// }

void permute(string s, int si, string ans, vector<string> &allPermutes)
{ 
    if (si == s.size())
    {
        ans += '\0';
        allPermutes.push_back(ans);
        // cout << ans<<endl;
        return;
    }
    for (int i = si; i < s.size(); i++)
    {
        string x=s;
        char a=x[i];
        swap(x[si], x[i]);
        permute(x, si+1, ans+a, allPermutes);
    }
    

}

int main()
{
    string s;
    cin >> s;
    vector<string> allPermutes;
    permute(s, 0, "", allPermutes);
    // cout<<strcmp("cba", s.c_str())<<endl;
    // cout<<allPermutes.size();
    sort(allPermutes.begin(), allPermutes.end());
    for (auto i : allPermutes)
    {

        // cout<<i.c_str()<<" "<<s.c_str()<<" "<<strcmp(i.c_str() , s.c_str())<<endl;
        if(strcmp(i.c_str() , s.c_str())>0){
            cout<<i<<endl;
        }
        
    }
    
}