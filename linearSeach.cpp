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
	cout<<"Enter Size of an Array\n";
	cin>>n;

	int array[n], key;
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
		cout<<array[i]<<" ";
	}

	cout<<"\nEnter key\n";
	cin>>key;

	for(int i=0; i<n; i++)
	{
		if(key == array[i])
		{
			cout<<"Element is at "<<i<<endl;
			return 0;
		}
		
	}
	cout<<"Element not found";

	return 0;

}