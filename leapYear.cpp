#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	int year;

	cout<<"Enter Year\n";
	cin>>year;

	if (year % 400 == 0)
	{
		cout<<"It's a Century Year";
	}
	else if(year % 4 == 0)
	{
		cout<<"It's a Leap Year";
	}
	else
	{
		cout<<"Nor Leap or Century";
	}

	return 0;

}

// int main()
// {
//  int year;
 
//  cout << "Enter a year: ";
//  cin >> year;
 
//  if (year % 4 == 0)
//  {
//  if (year % 100 == 0)
//  {
//  if (year % 400 == 0)
//  cout << year << " is a leap year.";
//  else
//  cout << year << " is not a leap year.";
//  }
//  else
//  cout << year << " is a leap year.";
//  }
//  else
//  cout << year << " is not a leap year.";
 
//  return 0;
// }