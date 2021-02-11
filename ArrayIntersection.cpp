    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        map<int, int> a;
        map<int, int> b;
        vector<int> ans;
        int t;

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (a.count(t))
            {
                a[t]++;
            }
            else
            {
                a[t] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (b.count(t))
            {
                b[t]++;
            }
            else
            {
                b[t] = 1;
            }
        }

        // for (auto it = a.begin(); it != a.end(); it++)
        //     cout << it->first << " : " << it->second << " ";
        // cout << endl;
        // for (auto it = b.begin(); it != b.end(); it++)
        //     cout << it->first << " : " << it->second << " ";

        // cout << endl;

        for (auto it = a.begin(); it != a.end(); it++)
        {
            if (a.count(it->first) && b.count(it->first))
            {
                int x = a[it->first], y = b[it->first];
                for (int i = 0; i < min(x, y); i++)
                {
                    // cout << it->first << ", ";
                    ans.push_back(it->first);
                }
            }
        }
        cout<<"[";
        for (int i = 0; i < ans.size()-1; i++)
        {
            cout<<ans[i]<<", ";
        }
        cout<<ans[ans.size()-1]<<"]"<<endl;
        
    }