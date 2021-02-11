#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter n,  k ";
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string ans = "";
    // cout << " x ";
    int i = 0;
    while (i < k)
    {
        int j = i;
        int mv = 0, mi = 0;
        while (j < n)
        {
            if (a[j] > a[i])
            {
                mi = j;
                mv = a[j];
                j++;
            }
        }
        if (i == mi)
            k++;
        swap(a[i], a[mi]);
        i++;
    }

    // vector<int>::iterator it=a.begin();

    // while (it != a.end())
    // {
    //     if (k)
    //     {
    //         cout<<"k "<<endl;
    //         auto mv = max_element(it, a.end());
    //         // it=a.erase(find(a.begin(), a.end(), mv));
    //         swap(it, mv);
    //         // ans.push_back('0' + mv);
    //         k--;
    //         ++it;
    //     }
    //     else
    //     {
    //         // ans.push_back(*it + '0');
    //         ++it;
    //     }
    // }

    for (auto i : a)
    {
        cout << i << " ";
    }
}