#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	float average, sum = 0.0;
	int n;
	
	cout<<"Enter no of element\n";
	cin>>n;

	float array[n];

	for(int i=0; i<n; i++)
	{
		cin>>array[i];
		sum = sum + array[i];
	}

	average = sum/n;
	cout<<"Average of all element is "<<average;

	return 0;

}