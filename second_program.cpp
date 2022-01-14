#include<bits/stdc++.h>
using namespace std;
// test git local status
int main(){
	/////   Arrays    /////
	cout << "enter the number of values to be read" << endl;
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	cout << "enter the values:" << endl;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum = sum + a[i];
	} 
	cout << "the sum is: " << sum << endl;

	/////   Matrix - 2D array   ///////
	cout << "enter matrix size" << endl;
	int p, q;
	cin >> p >> q; 
	int a1[p][q];
	for(int i =0; i < p; i++){
		for(int j = 0; j < q; j++){
			cin >> a1[i][j];
		}
	}
	
	for(int i =0; i < p; i++){
		for(int j = 0; j < q; j++){
			cout << a1[i][j] << " ";
		}
		cout << endl;
	}

	//////   Array limits size   ///////	
	// local arrays size is 10^5 order 
	// global arrays size is 10^7 order 

		
	
}


