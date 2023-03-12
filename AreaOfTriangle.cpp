#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	// Area of triangle
	int base, height, area;
	cout<<"Enter base & height"<<endl;
	cin>>base>>height;

	area = (base*height)/2;

	cout<<"Area of triangle: "<<area;

	return 0;

}