#include <bits/stdc++.h>
using namespace std;

void permuts(char *s, string a, int i=0){
	if(s[i]=='\0'){
		cout<<a<<endl;
		return;
	}
    cout<<i<<endl;
	for(int j=i; s[j]!='\0'; j++){
		
		permuts(s, a+s[j], ++i);
	}
}

int main() {
     
	permuts("abc", "");
}