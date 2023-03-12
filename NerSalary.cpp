#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	float BasicSalary, PercentageOfAllowancces, PercentageOfDeductions, NetSalary;

	// BasicSalary = 1000;
	// PercentageOfAllowancces = 20;
	// PercentageOfDeductions = 5;
	cout<<"Enter BasicSalary, PercentageOfAllowancces, PercentageOfDeductions"<<endl;
	cin>>BasicSalary>>PercentageOfAllowancces>>PercentageOfDeductions;

	NetSalary = BasicSalary + BasicSalary*PercentageOfAllowancces/100 - BasicSalary*PercentageOfDeductions/100;

	cout<<"NetSalary: Rs. "<<NetSalary;

	return 0;

}