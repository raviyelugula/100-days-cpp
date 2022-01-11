#include<bits/stdc++.h>
using namespace std;

int main(){
	
	cout << "hello world" << endl;
	
	/////////       data-types       ////////
	// char, int, float, double, boolean
	// char can only take 1 single charater and each is stored in ASCII in c++.
	// ASCII 65 A and 97 a 
	// characters are always in '' single quotes
	char c ='a';
	int a = 3;
	bool d = true; // false is 0 and rest all numbers are true in boolean
	cout << c << " " << a << " boolean is:" << d << endl;
	
	////////      type casting      ////////
	// one data type to other 
	cout << "printing the interger/ASCII value of char c:" << (int)c << endl;
	char c1 = 'a';
	char c2 = 'c';
	cout << "the ASCII diff of two characters:" <<c2-c1 << endl;
	
	///////       operators        /////////
	// arthematic operators: + - * / % ++ --
	cout << "modulo operator gives you the remainder. Ex: 32%3:" << 32%3 <<endl;
	// a++ is first assignment and then increment 
	// ++a is first increment and then assignment 
	cout << "count << a << a++ << a << ++a << a << endl" << endl;
	cout << a << a++ << a << ++a << a << endl;
	// relational operators: == != > < >= <= 
	
	///////        dynamic/runtime inputs      ///////
	// need either a space or newline character to distinguish inputs 	
	// careful with char inputs as they will take only 1 char and rest will be considered as the next input value.
	// if any additional inputs values are passed they will be ignored.	
	// int p;
 	// char q; 
	// cin >> q >> p;
	// cout << "the input integer given is:" << p << ". the input char is:" << q << endl;

	//////          Data type precidence        ////////
	// calculations happens on higher data types char < int < long int < long long int < float < double 
	cout << "7/2 = " << 7/2 << endl;
	cout << "7/2.0 = " << 7/2.0 << endl;
	cout << "'c'+1 = " << 'c'+1 << endl;
	double u = 7/2;
	cout << "double u = 7/2 even then u is " << u << endl;	

	/////           Operator precidence      ////////
	// left to right () [] -> . ++ --
	// left to right * / %
	// left to right + -	
	cout << 7/2*3 << " " << 3*7/2 << endl;
	
	/////   approx. Range     ///////
	// -10^9 < int < 10^9
	// -10^12 < long int < 10^12
	// -10^18 < long long int < 10^18
	int a_outofrange = 1000000 * 12000000;
	cout << "printing out of range 1000000 * 12000000 in int -- " << a_outofrange << endl;	
	// INT_MIN ----- INT_MAX if a overflow happends then the cycle will repeat 
	cout << INT_MAX << "  " << INT_MAX +1 << "  " << INT_MAX+2 << endl;
	// 1LL is a represenation of 1 in long long int 
	cout << 1LL * 1000000 * 120000  << endl;
	// use fixed keyword to not to print in scientific notation
	// setprecision(x) to define the number of decimal points you want to print
	// double doesn't store accurate large numbers it will store only the approx values
	double e = 1e24;
	cout << fixed << e << endl;
	
	////// Conditional Operations ///////
	// < > == <= >= 
	// &&  and, || or 
	int a1 = 2;
	int a2 = 3;
	cout << ((a1<a2) || (a1==2))<< endl;
	
	if(a1==2){
		cout << "a1 is 2"<< endl;
	}
	else{
		cout << "a1 isnot 2"<< endl;
	}
	
	///// Scope is defined as the code inside {}. The variables defined inside can't be used outside ///////
	///// Global variables are the ones that are defined outside {} i.e. out you clauses/function/main. They can be used anywhere in the code //////	

	///// Loops   //////
	///// break and continue -- jump statements /////
	int t;
	cin >>t;
	while(t--){
		cout << "inside while loop" << t << endl;
		}
	for(int a3=1; a3 <=10; a3++){
		cout << "inside for loop "<< a3 << endl;
	}			


}	


