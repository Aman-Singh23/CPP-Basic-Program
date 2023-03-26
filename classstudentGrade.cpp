#include <iostream>
#include<string>
using namespace std;

class Student
{
private:
	int roll_no;
	float physicsMark, chemistryMark, mathMark;
	string name;

public:
	Student(string name, int roll_no, float physicsMark, float chemistryMark, float mathMark);
	getName(string name);
	getRollNo(string roll_no);
	getMarks(float physicsMark, float chemistryMark, float mathMark);
	totalMarks(float physicsMark, float chemistryMark, float mathMark);
	displayGrade();

}

Student::Student(string name, int roll_no, float physicsMark, float chemistryMark, float mathMark)
{
	
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	string name;
	//cin>>name;
	getline(cin, name);
	cout<<name;

	return 0;

}