#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	// for(int i=0; i<5; i++)
	// {
	// 	for(int j=0; j<=i; j++)
	// 	{
	// 		cout<<"* ";
	// 	}
	// 	cout<<endl;
	// }

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i>=j){
				cout<<"* ";
			}
		}
		cout<<endl;
	}

	return 0;

}