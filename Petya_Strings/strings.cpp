#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif
	string a,b;
	cin >> a >> b;
	for (auto& c : a){
		c = tolower(c);
	}
	for (auto& d : b){
		d = tolower(d);
	}
	int res = a.compare(b);
	if (res < 0) cout << -1;
	else if (res > 0) cout << 1;
	else cout << res;

	

	return 0;
}