#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int number, remainder;
	// int rev = 0;

	cout<<"Enter number\n";
	cin>>number;

	while(number>0)
	{
		remainder = number%10;
		number = number/10;

		// rev = rev*10 +r;

		cout<<remainder;
	}

	return 0;

}