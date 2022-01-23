#include<bits/stdc++.h>
using namespace std;

// Standard Template Library -- ( Containers, Iterators, Algos, Functors )
// Containers ( pre-defined data structures ) to name a few
// 		Sequential: Vectors, Stack, Queue 
// 		Ordered: Maps, Multimaps, Set, Multiset ( sorted structure is maintained )
// 		Unordered: Unordered map, Unordered Set ( Hashing algos )
// Nested Containers -- Vector<vector <int>>; map<int, vector<int>>; 
// Iterators -- simillar to pointers, points to the address of containers. -- begin, end
// Algo -- bound, sort, max/min, accumulate, reverse, cound, find, next/previous_permutation 
// Functors -- Classes which can act as fuctions
// 
//

void print_vector(vector<int> v){
	cout << "--printing vector" << endl;
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}


int main(){
	pair<int, string> p;
	
	p = make_pair(2,"abc");
	cout << "printing pair values" << endl;
	cout << p.first << " " << p.second << endl;
	// passing by reference
	pair<int, string> &q = p;
	q = {21,"new_abc"};
	cout << "by reference pass" << endl;
	cout << q.first << " " << q.second << endl;
	cout << p.first << " " << p.second << endl;
	
	// pairs can be used in maintaining the relationship between array 
	int a[] = {1, 2, 3};
	int b[] = {4, 5, 6};
	pair<int, int> p_array[3];
	p_array[0] = {1,4};
	p_array[1] = {2,5};
	p_array[2] = {3,6};
	cout << "print pair array" << endl;
	for(int i = 0; i < 3; i++){
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}
	swap(p_array[0], p_array[2]);
	cout << "print swaped array" << endl;
	for(int i = 0; i < 3; i++){
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}

	/////////////  Vectors //////////////
	// vector is a array with dynamica size 
	
	int array[10]; // 10 size array
	vector<int>  v; // an integer vector with 0 size is given
	int n;
	cout << "provide the size of the vector" << endl;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x); // o(1) complexity 
	}
	print_vector(v);

	
	
}





