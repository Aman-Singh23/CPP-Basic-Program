#include <iostream>
#include <fstream>
using namespace std;

class Store
{
private:
	string name;
	float price;
	int quantity;
public:
	Store(string n, float p, int q)
	{
		name = n;
		price = p;
		quantity = q;
	}

	friend ofstream & operator<<(ofstream &ofs, Store &s);
	friend ifstream & operator>>(ifstream &ifs, Store &s);
	friend ostream & operator<<(ostream &os, Store &s);

};

ofstream & operator<<(ofstream &ofs, Store &s)
{
	ofs<<s.name<<endl;
	ofs<<s.price<<endl;
	ofs<<s.quantity<<endl;
}

ifstream & operator>>(ifstream &ifs, Store &s)
{
	ifs>>s.name>>s.price>>s.quantity;
}

ostream & operator<<(ostream &os, Store &s)
{
	os<<"Name "<<s.name<<endl;
	os<<"Price "<<s.price<<endl;
	os<<"Quantity "<<s.quantity<<endl;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	ofstream ofs("Store.txt");
	Store s1("HP", 95000.45f, 2);
	ofs<<s1;
	ofs.close();

	ifstream ifs("Store.txt");
	ifs>>s1;
	cout<<s1;

	return 0;

}