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

	// for(float x: A)
	// {
	// 	cout<<x<<endl;
	// }

	cout<<"Original Array\n";
	for(int i = 0; i<5; i++)
	{
		cout<<A[i]<<" ";
	}

	cout<<"\nIncrementated Original Array Using reference for each loop\n";
	for(auto &x: A)
	{
		cout<<++x<<endl;
	}

	cout<<"New Original Array\n";
	for(int j = 0; j<5; j++)
	{
		cout<<A[j]<<" ";
	}

	return 0;

}