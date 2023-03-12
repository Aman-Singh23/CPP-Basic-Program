#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int number, count = 0;

	cout<<"Enter number\n";
	cin>>number;

	for(int i=1; i<=number; i++ )
	{
		if (number % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		cout<<"Prime Number";
	}
	else
	{
		cout<<"Not a Prime Number";
	}

	return 0;

}