#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int a,b;

	cout<<"enter 2 nos. ";
	cin>>a>>b;
	int c = a + b;
	cout<<"sum is "<<c;

	return 0; 

		
}