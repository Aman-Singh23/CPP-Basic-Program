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

Rectangle::Rectangle()
{
	length=1;
	breadth=1;
}

Rectangle::Rectangle(int length, int breadth)
{
	this->length = length;
	this->breadth = breadth;
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
	return length * breadth;
}

int Rectangle::perimeter()
{
	return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
	return length== breadth;
}

Rectangle::~Rectangle()
{
	cout<<"Rectangle Class Destroyed"<<endl;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	Rectangle r1(10, 5);
	cout<<"Area "<<r1.area()<<endl;
	if(r1.isSquare())
		cout<<"Yes\n";

	return 0;

}