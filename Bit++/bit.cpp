#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	int n;
	cin>>n;
	int x = 0;
	string arr[n];
	string Inc = "++";
	bool isInc;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
		isInc = arr[i].find(Inc) != string::npos;
		if (isInc){
			x++;
		}
		else{
			x--;
		}
	}

	cout<<x;
	return 0;
}