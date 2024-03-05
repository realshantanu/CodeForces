#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	int mat[5][5];
	int k,l;
	int step = 0;
	for (int i = 0 ; i< 5; i++){
		for ( int j = 0 ; j < 5 ; j++){
			cin >> mat[i][j];
			if (mat[i][j] == 1){
				k = i;
				l = j;
			}
		}
	}
	while( k != 2 ){
		if ( k > 2 ){
			k--;
			step++;
		}
		else if ( k < 2 ){
			k++;
			step++;
		}
	}

	while ( l != 2 ){
		if ( l < 2 ){
			l++;
			step++;
		}
		else if ( l > 2 ){
			l--;
			step++;
		}
	}
	cout << step;	

	

	return 0;
}