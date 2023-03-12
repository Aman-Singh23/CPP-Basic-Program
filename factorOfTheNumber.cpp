#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif


	int sNumber,eNumber;

	cout<<"Enter Starting and Ending number\n";
	cin>>sNumber>>eNumber;

	for(int i=sNumber; i<=eNumber; i++)
	{
		if(eNumber % i == 0)
		{
			cout<<"Factor of "<<eNumber<<" is "<<i<<endl;
		}
	}

	return 0;

}