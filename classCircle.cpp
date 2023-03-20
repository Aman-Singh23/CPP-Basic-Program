#include <iostream>
using namespace std;

class Circle
{
public:
	float radius;

	float area()
	{
		return radius*radius;
	}

	float perimeter()
	{
		return 2*3.14*radius;
	}
};

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	Circle c1, c2;

	c1.radius = 10;
	cout<<"Area is "<<c1.area()<<endl;;

	c2.radius = 10;
	cout<<"Perimeter is "<<c2.perimeter()<<endl;

	return 0;

}