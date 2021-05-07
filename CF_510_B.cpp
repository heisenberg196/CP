#include <bits/stdc++.h>
using namespace std;
#define ll long long
    int n, m;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

bool findCycle(char x, int cnt, int rcnt, string a[], map<pair<int, int>, bool> &vis, char parent, int i, int j)
{
    for (int k = 0; k < 4; i++)
    {

        int nr = rcnt;
        if (k % 2 == 1)
        {
            nr++;
        }
        cout<<a[i + dx[k]][j + dy[k]];
        if ((vis.find({i + dx[k], j + dy[k]}) == vis.end() or vis[{i + dx[k], j + dy[k]}] == false) and a[i + dx[k]][j + dy[k]] == a[i][j] and (i + dx[k]>=0) and (i + dx[k])<n and (j + dy[k])>=0 and (j + dy[k])<m)
        {
            vis[{i + dx[k], j + dy[k]}] = true;
            bool ans = findCycle(x, cnt + 1, nr, a, vis, a[i + dx[k]][j + dy[k]], i + dx[k], j + dy[k]);
            if (ans)
            {
                return true;
            }
        }
        else if (vis[{i + dx[k], j + dy[k]}] == true and (i + dx[k] != i and j + dy[k] != j) and cnt >= 4)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    string a[51];
    for (int i = 0; i < n; i++)
        cin>>a[i];

    map<pair<int, int>, bool> vis;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[{i, j}] = true;
            cout<<"Hello";
            bool ans = findCycle(a[i][j], 1, 1, a, vis, '0', i, j);
            if (ans)
            {
                cout << "Yes";
                return 0;
            }
            vis[{i, j}]=false;
        }
    }
    cout << "No";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// string board[51];
// bool visited[51][51];
// bool findCycle = false;
// int dx[] = {1, -1, 0, 0};
// int dy[] = {0, 0, 1, -1};

// void dfs(int x, int y, int fromX, int fromY, char needColor)
// {
// 	if(x < 0 || x >= n || y < 0 || y >= m) return;
// 	if(board[x][y] != needColor) return;
// 	if(visited[x][y])
// 	{
// 		findCycle = true;
// 		return;
// 	}
// 	visited[x][y] = true;
// 	for(int f = 0; f < 4; f++)
// 	{
// 		int nextX = x + dx[f];
// 		int nextY = y + dy[f];
// 		if(nextX == fromX && nextY == fromY) continue;
// 		dfs(nextX, nextY, x, y, needColor);
// 	}
// }

// int MAIN()
// {
// 	cin >> n >> m;
// 	for(int i = 0; i < n; i++)
// 		cin >> board[i];
// 	memset(visited, false, sizeof(visited));
// 	for(int i = 0; i < n; i++)
// 		for(int j = 0; j < m; j++)
// 			if(!visited[i][j])
// 				dfs(i, j, -1, -1, board[i][j]);
// 	cout << (findCycle ? "Yes" : "No") << endl;
// 	return 0;
// }

// int main()
// {
// 	#ifdef LOCAL_TEST
// 		freopen("in.txt", "r", stdin);
// 		freopen("out.txt", "w", stdout);
// 	#endif
// 	ios :: sync_with_stdio(false);
// 	cout << fixed << setprecision(16);
// 	return MAIN();
// }
