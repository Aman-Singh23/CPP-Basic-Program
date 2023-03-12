#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int array[] = {2,-4,9,6,0,-7,-4,1};
	int n = 8, countPositive=0, countNegative=0;

	for(int i=0; i<8; i++)
	{
		if(array[i] > 0)
		{
			countPositive++;
		}
		else if(array[i] < 0)
		{
			countNegative++;
		}
	}

	cout<<"Count of Postive Number: "<<countPositive<<endl;
	cout<<"Count of Negative Number: "<<countNegative<<endl;

	return 0;

}