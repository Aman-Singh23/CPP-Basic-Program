#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cout<<"Enter number\n";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

	return 0;

}