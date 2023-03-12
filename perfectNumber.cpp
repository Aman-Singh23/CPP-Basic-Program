#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif


	int number, sum=0;

	cout<<"Enter number\n";
	cin>>number;

	for(int i=1; i<=number; i++)
	{
		if(number % i == 0)
		{
			sum += i;
		}
	}
	if (sum == 2*number)
	{
		cout<<number<<" is a Perfect Number";
	}
	else
	{
		cout<<number<<" is not a Perfect Number";
	}

	return 0;

}