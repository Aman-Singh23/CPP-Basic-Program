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

	int array[n];
	int key, low=0, high=9, mid;
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
		cout<<array[i]<<" ";
	}

	cout<<"\nEnter key\n";
	cin>>key;

	while(low <= high)
	{
		mid = (low+high)/2;
		if(key == array[mid])
		{
			cout<<"Element found at "<<mid<<endl;
			exit(0);
		}
		else if(key < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	cout<<"Element not found";

	return 0;

}