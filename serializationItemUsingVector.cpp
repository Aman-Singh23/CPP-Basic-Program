#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
	string name;
	float price;
	int quantity;
public:
	Item(){}
	Item(string n, float p, int q);

	friend ofstream & operator<<(ofstream &ofs, Item &i);
	friend ifstream & operator>>(ifstream &ifs, Item &i);
	friend ostream & operator<<(ostream &os, Item &i);
};

Item::Item(string n, float p, int q)
{
	name = n;
	price = p;
	quantity = q;
}

ofstream & operator<<(ofstream &ofs, Item &i)
{
	ofs<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
	return ofs;
}

ifstream & operator>>(ifstream &ifs, Item &i)
{
	ifs>>i.name>>i.price>>i.quantity;
	return ifs;
}

ostream & operator<<(ostream &os, Item &i)
{
	os<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
	return os;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	string name;
	float price;
	int quantity;

	cout<<"Enter the number of Item: \n";
	cin>>n;

	//Item *list[n];
	vector<Item *> list;

	cout<<"Enter All Item \n"<<endl;
	for(int i=1; i<=n; i++)
	{
		cout<<"Enter "<<i<<" Item Name, Price and Quantity\n";
		cin>>name;
		cin>>price;
		cin>>quantity;
		
		//list[i] = new Item(name, price, quantity);
		list.push_back(new Item(name, price, quantity));
	}

	ofstream ofs("Items_Vector.txt");
	
	// for(int i= 1; i<=n; i++)
	// {
	// 	ofs<<*list[i];
	// }
	vector<Item *>::iterator itr;
	for(itr=list.begin(); itr!=list.end(); itr++)
	{
		ofs<<**itr;
	}

	Item item;
	ifstream ifs("Items_Vector.txt");
	for(int i=1; i<=n; i++)
	{
		ifs>>item;
		cout<<"Item "<<i<<endl<<item<<endl;
	}

	return 0;

}