#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	// Perimeter of Rectangle
	int length, breadth, perimeter;
	cout<<"Enter length & breadth "<<endl;
	cin>>length>>breadth;

	perimeter = 2 * (length+breadth);

	cout<<"Perimeter of Rectangle: "<<perimeter;

	return 0;

}