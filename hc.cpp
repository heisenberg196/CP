#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct street {
    int in_beg, in_end;
    string st_name;
    int ttl;
};

int main() 
{ 
#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("a.txt", "r", stdin); 
    int D, I, S, V, F;
    cin>>D>>I>>S>>V>>F;
    vector<street> streets;
    for (int i = 0; i < S; i++)
    {
        street t1;
        cin>>t1.in_beg>>t1.in_end>>t1.st_name>>t1.ttl;
        streets.push_back(t1);
    }
    vector<vector<string>> car_paths;    
    for (int i = 0; i < V; i++)
    {
        int p;
        cin>>p;
        vector<string> car_path;
        for (int j = 0; j < p; j++)
        {
            string s;
            cin>>s;
            car_path.push_back(s);
        }
        car_paths.push_back(car_path);
        car_path.clear();
    }
    
    for (auto st : car_paths[0])
    {
        cout<<st;
    }
    
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
#endif 
    return 0; 
} 