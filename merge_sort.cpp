#include<bits/stdc++.h>
using namespace std;

const int array_size = 1e5+10;
int a[array_size];


///////////////////////   Merge sort    //////////////////
// Break the array into two till you reach single elements
// join two sub-sorted-arrays so that the result is sorted.
// join will start from the single element array till you reacreat the original

void merge(int left, int right, int mid){
	int left_array_size = mid - left +1;
	int left_array[left_array_size+1];
	int right_array_size = right - (mid + 1) +1;
	int right_array[right_array_size+1];

	// assigning a temp left array	
	for(int i = 0; i < left_array_size; i++){
		left_array[i] = a[i+left];
	}
	// assigning a temp right array
	for(int i = 0; i < right_array_size; i++){
		right_array[i] = a[i+mid+1];
	}
	// assigning a dummy max value to the end of each arry so that we don't enter a situation where one array is having lesser
	// numbers and other has many number greater like (23,45,67,90,101,150) and (24,25,26,31,33,35)
	left_array[left_array_size] = right_array[right_array_size] = INT_MAX;
	int left_i = 0;
	int right_i = 0;
	for(int i = left; i <= right; i++ ){
		// check both the array corresponding element and based on the result assign the least one to the original array
		// and increase the corresponding array's index
		if(left_array[left_i] <= right_array[right_i]){
			a[i] = left_array[left_i];
			left_i++;
		}
		else{
			a[i] = right_array[right_i];
			right_i++;
		}
	}	
	// end of the loop you have give the sort values for array from left to right index values
}

void merge_sort(int left, int right){
	if(left == right) return;
	int mid = (left+right)/2;
	merge_sort(left, mid);
	merge_sort(mid+1, right);
	merge(left, right, mid);
}

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
	
	merge_sort(0,n-1);		

	cout << "sorted array is: " << endl;
	print_array(n);
}

