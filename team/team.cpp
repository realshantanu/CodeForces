#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	int n;
	cin >> n ;
	int openion[n][3];
	int solve = 0;
	int attempt = 0;
	for (int i = 0 ; i < n ; i++){
		for (int j = 0 ; j < 3; j++){
			cin >> openion[i][j];
			if (openion[i][j] == 1){
				solve += 1;
			}
		}
		if (solve > 1){
			attempt++;
		}
		solve = 0;
	}


	cout<<attempt;
	

	return 0;
}