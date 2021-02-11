#include <bits/stdc++.h>
using namespace std;

int calc(int x, int y, int z, int w){
    
    if(w==0){
        cout<<x<<" "<<y<<" "<<z<<endl;
        return 1;   
    }
    
    if(w<3)
        return -1;
    
    if(calc(x+1, y, z, w-3))
        return 1;
    if(calc(x, y+1, z, w-5))
        return 1;
    if(calc(x, y, z+1, w-7))
        return 1;

    return 0;

    /*
    	if (n == 1 || n == 2 || n == 4) {
		cout << -1 << endl;
		return;
	}
	if (n % 3 == 0) {
		cout << n / 3 << ' ' << 0 << ' ' << 0 << endl;
	} else if (n % 3 == 1) {
		cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << endl;
	} else {
		cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << endl;
	}
    */
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int x=0, y=0, z=0, w, warr[400]={0};
        cin>>w;
        if(calc(x, y, z, w)!=1)
        cout<<"-1"<<endl;
    }
}