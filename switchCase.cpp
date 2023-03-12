#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int option;
	float a, b;

	cout<<"Choose any Operation\n";
	cout<<" 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n";

	cout<<"Enter your Choice\n";
	cin>>option;

	cout<<"Enter 2 no's"<<endl;
	cin>>a>>b;

	switch(option)
	{
		case 1: cout<<"Result is: "<<a+b;
		break;

		case 2: cout<<"Result is: "<<a-b;
		break;

		case 3: cout<<"Result is: "<<a*b;
		break;

		case 4: cout<<"Result is :"<<a/b;
		break;

		default: cout<<"Invalid option Choosen";
	}

	return 0;

}