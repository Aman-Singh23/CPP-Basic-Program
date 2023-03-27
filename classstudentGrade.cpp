#include <iostream>
using namespace std;

class Student
{
private:
	int roll_no;
	string name;
	int physicsMark;
	int chemistryMark; 
	int mathMark;

public:
	Student(int r, string n, int p, int c, int m)
	{
		name = n;
		roll_no = r;
		physicsMark = p;
		chemistryMark = c;
		mathMark = m;
	}
	float totalMarks()
	{
		return physicsMark + chemistryMark + mathMark;
	}
	char displayGrade()
	{
		float totalmarks = totalMarks()/3;
		
		if(totalmarks>=60)
			return 'A';
		else if(totalmarks<60 & totalmarks>=40)
			return 'B';
		else
			return 'C';
	}
};
int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	int roll_no;
	string name;
	float physics, chemistry, math;

	cin>>roll_no;
	cin>>name;
	cin>>physics>>chemistry>>math;

	Student s1(roll_no, name, physics, chemistry, math);
	cout<<roll_no<<endl;
	cout<<name<<endl;
	cout<<"Average Marks "<<s1.totalMarks()/3<<endl;
	cout<<s1.displayGrade();

}