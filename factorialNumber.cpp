#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif


	int sNumber,eNumber, fact = 1;

	cout<<"Enter Starting and Ending number\n";
	cin>>sNumber>>eNumber;

	for(int i=sNumber; i<=eNumber; i++)
	{
		//sum = sum * i;
		fact *= i;
	}
	cout<<"factorial is: "<<fact;

	return 0;

}