#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int t;
        // cout<<"hello";

        vector<list<int>> arr;
cout<<"enter num";
        cin >> t;

        arr[0].push_back(t);
        for (int i = 1; i < n; i++)
        {
            // cout
            cin >> t;
            int j = 0, k = 0;
            while (true)
            {
                if (arr[j].size() > 0)
                {
                    if (arr[j].back() < t)
                    {
                        arr[j].push_back(t);
                    }
                    else
                    {
                        j++;
                    }
                }
                else
                {
                    arr[j].push_back(t);
                    break;
                }
            }
        }
    // for(auto nodes : arr){
    //     cout<<nodes.first<<" -> ";
    //     for (auto nbrs : nodes.second)
    //     {
    //         cout<<nbrs<<" ";
    //     }
    //     cout<<endl;
    // }
        
        cout << arr.size() << endl;
    }
}