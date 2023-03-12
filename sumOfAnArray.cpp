#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	float A[] = {1, 2.4, 4, 6, 7.8};
	float sum = 0;

	for(int i = 0; i<5; i++)
	{
		sum = sum + A[i];
	}

	cout<<"Sum of the elements in the Array is: "<<sum;

	return 0;

}