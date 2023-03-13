#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int count = 1;
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}

	return 0;

}