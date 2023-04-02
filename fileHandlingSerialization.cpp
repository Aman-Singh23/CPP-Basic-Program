#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
	string name;
	int roll;
	string branch;
public:
	Student(){}
	Student(string n, int r, string b)
	{
		name = n;
		roll = r;
		branch = b;
	}
	friend ofstream & operator<<(ofstream &ofs, Student &s);
	friend ifstream & operator>>(ifstream &ifs, Student &s);
	friend ostream & operator<<(ostream &os, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s)
{
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;
}

ifstream & operator>>(ifstream &ifs, Student &s)
{
	ifs>>s.name;
	ifs>>s.roll;
	ifs>>s.branch;
}

ostream & operator<<(ostream &os, Student &s)
{
	os<<"Name "<<s.name<<endl;
	os<<"Roll "<<s.roll<<endl;
	os<<"Branch "<<s.branch<<endl;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	ofstream ofs("Test.txt");
	Student s1("Aman", 01, "CS");
	ofs<<s1;
	ofs.close();

	Student s2;
	ifstream ifs("Test.txt");
	ifs>>s1;
	cout<<s1;

	return 0;

}