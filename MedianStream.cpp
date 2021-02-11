#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int t;

        // int a[n];
        // priority_queue<int, vector<int>, greater<int>> lhalf;
        // priority_queue<int> rhalf;
        set<int, greater<int>> lhalf;
        set<int> rhalf;

        cin >> t;
        cout<<t<<" ";
        lhalf.insert(t);
        for (int i = 1; i < n; i++)
        {
            cin >> t;
            if (lhalf.size() == rhalf.size())
            {
                if (t < *rhalf.begin())
                {
                    lhalf.insert(t);
                    // cout<<" Lhalf : ";
                    // for (auto it : lhalf)
                    //     cout<<*it<<" ";
                    
                    cout << *lhalf.begin() << " ";
                    // lhalf.pop();
                }
                else
                {
                    rhalf.insert(t);
                    cout << *rhalf.begin() << " ";
                    // rhalf.pop();
                }
            }
            else if (lhalf.size() > rhalf.size())
            {
                if (t >= *lhalf.begin())
                {
                    rhalf.insert(t);
                    cout << (*lhalf.begin()+*rhalf.begin())/2 << " ";

                    // rhalf.pop();
                }
                else
                {
                    rhalf.insert(*lhalf.begin());
                    lhalf.erase(lhalf.begin());
                    lhalf.insert(t);
                    // cout << *lhalf.begin() << endl;
                    cout << (*lhalf.begin()+*rhalf.begin())/2 << " ";


                }
            }
            else if (lhalf.size() < rhalf.size())
            {
                if (t <= *rhalf.begin())
                {
                    lhalf.insert(t);
                    cout << (*lhalf.begin()+*rhalf.begin())/2 << " ";
                    // rhalf.pop();
                }
                else
                {
                    lhalf.insert(*rhalf.begin());
                    *rhalf.erase(rhalf.begin());
                    rhalf.insert(t);
                    // cout << *rhalf.begin() << endl;
                    cout << (*lhalf.begin()+*rhalf.begin())/2 << " ";


                }
            }
        }
    }
}