#include <iostream>
using namespace std;

float add(float a, float b)
{
	return a+b;
}

float sub(float a, float b)
{
	return a-b;
}

int mul(float a, float b)
{
	return a*b;
}

int div(float a, float b)
{
	return a/b;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int operation;
	float x, y, z;

	cout<<"Enter what operation you want to perfrom\n";
	cout<<" 1. Addition\n 2. Substration\n 3. Multiplication\n 4. Division\n";

	cin>>operation;
	cout<<"Enter 2 no's\n";
	cin>>x>>y;

	switch(operation)
	{
		case 1: z = add(x,y);
				cout<<"Addition is "<<z;
				break;

		case 2: z = sub(x,y);
				cout<<"Substration is "<<z;
				break;

		case 3: z = mul(x,y);
				cout<<"Multiplication is "<<z;
				break;

		case 4: z = div(x,y);
				cout<<"Division is "<<z;
				break;

		default : cout<<"Invalid Operation";
	}

	

	return 0;

}