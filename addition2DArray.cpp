#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int array1[2][3] = {{1,2,3}, {4,5,6}};
	int array2[2][3] = {4,5,6,1,2,3};
	int array3[2][3];

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			array3[i][j] = array1[i][j] + array2[i][j]; 
		}
	}

	// for(int i=0; i<2; i++)
	// {
	// 	for(int j=0; j<3; j++)
	// 	{
	// 		cout<<array3[i][j]<<" "; 
	// 	}
	// 	cout<<endl;
	// }

	for(auto& x:array3)
	{
		for(auto& y:x)
		{
			// cout<<array3<<" ";
			cout<<y<<" ";
		}
		cout<<endl;
	}

	return 0;

}