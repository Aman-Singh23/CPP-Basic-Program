#include <iostream>
using namespace std;

int Search(int array[], int size, int key)
{
	for(int i=0; i<size; i++)
	{
		if(array[i] == key){
			return i;
		}
	}
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int size, index;
	cout<<"Enter size of an Array\n";
	cin>>size;

	int array[size], key;

	cout<<"Enter elements for the array\n";
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}

	cout<<"Enter key\n";
	cin>>key;

	index = Search(array, size, key);
	cout<<key<<" is at index "<<index;

	return 0;

}