#include<bits/stdc++.h>
using namespace std;

const int array_size = 10000;
int a[array_size];

///////////////////////    Selection sort    //////////////////
// take the min element store it seperatly 
// and remove it from the original list 

void swap_elements(int &p, int &q){
	int temp = p;
	p = q;
	q = temp;
} 

void print_array(int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cout << "enter the size of the array" << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "given array is: " << endl;
	print_array(n);
	
	for(int i = 0; i < n; i++){
		int min_index = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}
		swap_elements(a[i], a[min_index]);
	}
	cout << "sorted array is: " << endl;
	print_array(n);
}

