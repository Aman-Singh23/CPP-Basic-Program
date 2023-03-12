#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int number, remainder,number2,remainder_rev, rev = 0;

	// cout<<"Enter number\n";
	cin>>number;

	while(number>0)
	{
		remainder = number%10;
		number = number/10;

		rev = rev*10 +remainder;


	}
	// cout<<rev<<endl;
	while(rev>0)
	{
		remainder_rev = rev%10;
		rev = rev/10;
		// cout<<remainder_rev<<endl;

		switch(remainder_rev)
		{
			case 1: cout<<"One ";
			break;

			case 2: cout<<"Two ";
			break;

			case 3: cout<<"Three ";
			break;

			case 4: cout<<"Four ";
			break;

			case 5: cout<<"Five ";
			break;

			case 6: cout<<"Six ";
			break;

			case 7: cout<<"Seven ";
			break;

			case 8: cout<<"Eight ";
			break;

			case 9: cout<<"Nine ";
			break;

			case 0: cout<<"Zero ";
			break;

			default: cout<<"Invalid";
		}
	}
	return 0;

}