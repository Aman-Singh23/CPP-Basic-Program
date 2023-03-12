#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int number, copy_number, remainder, reverse = 0;

	cout<<"Enter number\n";
	cin>>number;

	copy_number = number;

	while(number>0){
		remainder = number%10;
		number = number/10;
		reverse = reverse*10 + remainder;
	}

	if(copy_number == reverse){
		cout<<"It's a Palimdrom";
	}
	else{
		cout<<"Not a Palindrom";
	}

	return 0;

}