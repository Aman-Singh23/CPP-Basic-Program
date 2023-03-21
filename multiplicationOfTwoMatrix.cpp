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

	cin>>r1>>c1;
	cin>>r2>>c2;

	int array1[r1][c1], array2[r2][c2], mArray[r1][c2] ;

	if(c1 != r2)
	{
		cout<<"Multiplication not possible";
		return 0;
	}
	else
	{
		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c1; j++)
				cin>>array1[i][j];
		}

		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c1; j++)
				cout<<array1[i][j]<<" ";
			cout<<endl;
		}

		cout<<endl;

		for(int i=0; i<r2; i++)
		{
			for(int j=0; j<c2; j++)
				cin>>array2[i][j];
		}

		for(int i=0; i<r2; i++)
		{
			for(int j=0; j<c2; j++)
				cout<<array2[i][j]<<" ";
			cout<<endl;
		}


		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c2; j++)
			{
				mArray[i][j]=0;
				for(int k=0; k<c1; k++)
				{
					mArray[i][j] += array1[i][k]*array2[k][j];
				}
			}
		}

		cout<<endl;

		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c2; j++)
				cout<<mArray[i][j]<<" ";
			cout<<endl;
		}



	}

	return 0;

}