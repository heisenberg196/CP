#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> node;

vector<int> mergeArrays(vector<vector<int>> arr)
{
    vector<int> result;
    priority_queue<node, vector<node>, greater<node>> pq;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(make_pair(arr[i][0], make_pair(i, 0)));
    }

    while (!pq.empty())
    {
        node current = pq.top();
        pq.pop();
        int el = current.first;
        int x = current.second.first;
        int y = current.second.second;
        result.push_back(el);
        if (y + 1 < arr[x].size())
        {
            pq.push({arr[x][y + 1], {x, y + 1}});
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> res = mergeArrays(a);
        for (auto x : res)
        {
            cout << x << " ";
        }
    }
}