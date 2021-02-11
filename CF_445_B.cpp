// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool comp(list<int> a, list<int> b){
//     return a.size()<b.size();
// }

// int main(){
//     int n, m;
//     cin>>n>>m;
//     vector<int> gr[n];
//     for (int i = 0; i < m; i++)
//     {
//         int t1, t2;
//         cin>>t1>>t2;
//         gr[t1].push_back(t2);
//         gr[t2].push_back(t1);
//     }
//     cout<<"hello";
//     // sort(gr.begin(), gr.end(), comp);
//     for (auto i: gr)
//     {
//         for (auto j:i)
//         {
//             cout<<j;
//         }
        
    
//     }
    
// return 0;
    
// }
#include <cstdio>
using namespace std;
 
int n, m, fa[100], x, y;
 
int gf(int x) {
	if (fa[x] != x)	fa[x] = gf(fa[x]);
	return fa[x];
}
 
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)	fa[i] = i;
	while (m--) {
		scanf("%d%d", &x, &y);
		fa[gf(x)] = gf(y);
	}
	long long ans = (1LL << n);
	for (int i = 1; i <= n; i++)
		if (gf(i) == i)	ans /= 2;
	printf("%I64d\n", ans);
}
 