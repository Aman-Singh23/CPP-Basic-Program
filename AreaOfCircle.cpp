#include <iostream>
#include<math.h>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	// Area of circle
	float radius, area;
	cout<<"Enter radius"<<endl;
	cin>>radius;

	area = 3.1425f * pow(radius,2);

	cout<<"Area of circle: "<<area;

	return 0;

}