#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	int n,k;
	cin >> n >> k;
	int arr[n];
	int next = 0;
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for ( int  j = 0 ; j < n ; j++ ){

		if (arr[j] >= arr[k-1] && arr[j]>0) next++;
	}
	cout<<next;
	return 0;
}