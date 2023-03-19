#include <iostream>
using namespace std;

int maximum(int x, int y, int z)
{
	if(x>y && x>z)
	{
		return x;
	}
	else if(y>z)
	{
		return y;
	}
	else
		return z;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int a, b, c, greater;

	cout<<"Enter 3 no's \n";
	cin>>a>>b>>c;

	greater = maximum(a, b, c);
	cout<<"Greater number is "<<greater;

	return 0;

}