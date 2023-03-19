#include <iostream>
#include <math.h>

using namespace std;

float powerN(int a, int p)
{
	return pow(a, p);
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int n, x, result;
	cout<<"Enter number\n";
	cin>>n;

	cout<<"Enter Power for the given number\n";
	cin>>x;

	result = powerN(n, x);
	cout<<"Result of the given expression is: "<<result;

	return 0;

}