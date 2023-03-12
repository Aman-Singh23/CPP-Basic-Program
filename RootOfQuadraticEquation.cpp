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

	
	// Root Of Quadratic Equation
	int a, b, c;
	float root1, root2;
	cout<<"Enter Coeficient a, b, c "<<endl;
	cin>>a>>b>>c;

	root2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	root1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);

	// root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	// root2 = (-b - sqrt(b*b-4*a*c))/(2*a);

	cout<<"Roots are: "<<root1<<" and "<<root2;

	return 0;

}