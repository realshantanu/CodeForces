#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
	#endif

	string str;
	cin >> str;
	int length = str.size();
	int range = 0;
	int arr[100];
	for (int i = 0 ; i < length ; i++){
		if ( str[i] != '+' ){
			arr[range] = (int) str[i];
			range++;
		}
		else {
			continue;
		}
	}
	for (int i = 0; i < range; ++i)
	{
		for (int j = 0 ; j < range - i - 1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < range; ++i)
	{
		if ( i != range - 1 ){
			cout<< (char)arr[i] << "+";
		}
		else{
			cout<<(char)arr[i];	
		}
		
	}
	return 0;
}