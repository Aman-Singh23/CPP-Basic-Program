#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	Rectangle();
	Rectangle(int l, int b);
	Rectangle(Rectangle &r);
	int getLength(){return length;}
	int getBreadth(){return breadth;}
	void setLength(int l);
	void setBreadth(int b);
	int area();
	int perimeter();
	bool isSquare();
	~Rectangle();

};

class Cuboid:public Rectangle
{
private:
	int height;

public:
	Cuboid(int h)
	{
		height = h;
	}

	int getHeight()
	{
		return height;
	}

	void setHeight(int h)
	{
		height = h;
	}

	int volumn()
	{
		getLength()*getBreadth()*height;
	}
};

Rectangle::Rectangle()
{
	length = 1;
	breadth = 1;
}

Rectangle::Rectangle(int l=1, int b=1)
{
	length = l;
	breadth = b;
}

Rectangle::Rectangle(Rectangle &r)
{
	length = r.length;
	breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
	length = l;
}

void Rectangle::setBreadth(int b)
{
	breadth = b;
}

int Rectangle::area()
{
	return length*breadth;
}

int Rectangle::perimeter()
{
	return 2*(length + breadth);
}

bool Rectangle::isSquare()
{
	return (length == breadth);
}

Rectangle::~Rectangle()
{
	cout<<"\nConstructor Destroyed\n";
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	// Rectangle r(5,5);
	// cout<<r.area();

	Cuboid c(5);
	cout<<getHeight();
	c.setLength(10);
	c.setBreadth(5);
	cout<<volumn();

	return 0;

}