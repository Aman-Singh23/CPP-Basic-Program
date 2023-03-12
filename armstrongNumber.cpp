#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int number, number2 ,remainder, sum=0 ;

	cout<<"Enter number\n";
	cin>>number;

	number2 = number;

	while(number>0){
		remainder = number%10;
		number = number/10;

		sum = sum + remainder*remainder*remainder;
	}
	if (sum == number2){
		cout<<"Armstrong Number";
	}
	else{
		cout<<"Not an Armstrong Number";
	}
	
	return 0;

}