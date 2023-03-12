#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int number;

	cout<<"Enter number"<<endl;
	cin>>number;

	cout<<"Using For Loop\n";
	for(int i=1; i<=10; i++)
	{
		cout<<number<<" x "<<i<<" = "<<number*i<<endl;
	}

	cout<<"Using While Loop\n"<<endl;
	int j = 1;
	while(j<=10)
	{
		cout<<number<<" x "<<j<<" = "<<number*j<<endl;
		j++;
	}

	return 0;

}