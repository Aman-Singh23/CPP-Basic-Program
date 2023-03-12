#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int num1, num2;

	cout<<"Enter 2 no's\n";
	cin>>num1>>num2;

	while(num1 != num2)
	{
		if (num1 > num2)
		{
			num1 = num1 - num2;
		}
		else if (num2 > num1)
		{
			num2 = num2 - num1;
		}
	}

	cout<<"GCD: "<<num1;

	return 0;

}