#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	int n;
	cin >> n;
	string word[n];

	for (int i = 0 ; i < n ; i++){
		cin >> word[i];
	}

	for (int i = 0; i < n; i++)
	{
		if ( word[i].size() > 10 ){
			string lword = "";
			string first = word[i].substr(0,1);
			int size = word[i].size();
			string last = word[i].substr(size - 1,1);
			lword = first + to_string(size - 2) + last;
			cout << lword << endl;
		}
		else {
			cout << word[i] << endl;
		}
	}

	
	return 0;
}