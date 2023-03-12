#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	// Sum of n nutural number
	int number, sum;
	cout<<"Enter number "<<endl;
	cin>>number;

	sum = (number * (number + 1))/2;

	cout<<"Sum of n nutural number: "<<sum;

	return 0;

}