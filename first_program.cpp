#include<iostream>
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
	
	///////        dynamic/runtime inputs ///////
	// need either a space or newline character to distinguish inputs 	
	// careful with char inputs as they will take only 1 char and rest will be considered as the next input value.
	// if any additional inputs values are passed they will be ignored.	
	int p;
	char q; 
	cin >> q >> p;
	cout << "the input integer given is:" << p << ". the input char is:" << q << endl;

	//////                               ////////
	cout << "7/2 = " << 7/2 << endl;
	
}
