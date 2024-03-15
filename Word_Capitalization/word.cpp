#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	string word;
	cin >> word;
	string res = "";
	for (int i = 0 ; i < word.size() ; i++){
		if ( i == 0 & (int)word[i] > 90 ){
			cout << (char)((int)word[i] - 32 );
		}
		else {
			cout << word[i];
		}

	}

	return 0;
}