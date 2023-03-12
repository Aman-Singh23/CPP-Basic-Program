#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int array[] = {2,4,9,6,7,4,1};
	int n = 7, max = array[0], min = array[0];

	for(int i=1; i<7; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	for(int i=1; i<7; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;

	return 0;

}