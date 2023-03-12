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

	
	// Calcucate Speed
	float u, v, a, speed;
	cout<<"Enter value of u, v, a "<<endl;
	cin>>u>>v>>a;

	speed = (pow(v,2) - pow(u,2))/(2*a);

	cout<<"Speed is: "<<speed;

	return 0;

}