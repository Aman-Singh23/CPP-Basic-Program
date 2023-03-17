#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int r1, c1, r2, c2;
	
	cout<<"Enter r1 & c1 dimension for 1st matrics"
	cin>>m>>n;

	cout<<"Enter r2 & c2 dimension for 2nd matrics"
	cin>>x>>y;

	int array1[r1][c1], array2[r2][r2], array3[r1][c2];

	if(c1!=r2)
	{
		cout<<"Multiplication not possible";
	}
	else
	{
		cout<<"Enter elements of 1st matrics";
		for(int i=0; i<r1; i++)
		{
			for(int j=0; i<c1; j++)
			{
				cin>>array1[i][j];
			}
		}

		cout<<"Enter elements of 2nd matrics";
		for(int i=0; i<r2; i++)
		{
			for(int j=0; i<c2; j++)
			{
				cin>>array1[i][j];
			}
		}
		cout<<"Multiplication of two matrics";
		for(int i=0; i<r1; i++)
		{
			for(int j=0; i<c2; j++)
			{
				array3[i][j] = array1[i][j] * array2[i][j];
			}
		}
	}


	return 0;

}