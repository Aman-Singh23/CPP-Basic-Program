#include <iostream>
using namespace std;

class Shape
{
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};

class Rectangle:public Shape
{
private:
	float length;
	float breadth;
public:
	Rectangle(float l, float b)
	{
		length = l;
		breadth = b;
	}

	float area()
	{
		return length * breadth;
	}

	float perimeter()
	{
		return 2*(length + breadth);
	}
};

class Circle:public Shape
{
private:
	float radius;
public:
	Circle(float r)
	{
		radius = r;
	}

	float area()
	{
		return 3.14f * radius * radius;
	}

	float perimeter()
	{
		return 2 * 3.14f * radius;
	}
};

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	Shape *ptr;
	ptr = new Rectangle(10, 10);
	cout<<"Area of Rectangle "<<ptr->area()<<endl;
	cout<<"Perimeter of Rectangle "<<ptr->perimeter()<<endl;

	ptr = new Circle(10);
	cout<<"Area of Circle "<<ptr->area()<<endl;
	cout<<"Perimeter of Circle "<<ptr->perimeter()<<endl;

	return 0;

}