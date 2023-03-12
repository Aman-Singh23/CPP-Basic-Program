#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	// n = n(n+1)/2

	int sNumber,eNumber, sum = 0;

	cout<<"Enter Starting and Ending number\n";
	cin>>sNumber>>eNumber;

	for(int i=sNumber; i<=eNumber; i++)
	{
		//sum = sum + i;
		sum += i;
	}
	cout<<"Total sum is: "<<sum;

	return 0;

}