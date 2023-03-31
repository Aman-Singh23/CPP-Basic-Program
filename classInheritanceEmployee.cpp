#include <iostream>
using namespace std;

class Employee
{
private:
	int emp_id;
	string emp_name;
public:
	Employee(int id, string name)
	{
		emp_id = id;
		emp_name = name;
	}

	int getID(){return emp_id;}

	string getName(){return emp_name;}

	void setID(int id)
	{
		id = emp_id;
	}

	void setName(string name)
	{
		name = emp_name;
	}
};

class FullTimeEmployee:public Employee
{
private:
	float salary;
public:
	FullTimeEmployee(int id, string name, float salary):Employee(id, name)
	{
		this->salary = salary;
	}

	float getSalary(){return salary;}
};

class PartTimeEmployee:public Employee
{
private:
	float wage;
public:
	PartTimeEmployee(int id, string name, float wage):Employee(id, name)
	{
		this->wage = wage;
	}

	float getWage(){return wage;}
};


int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	FullTimeEmployee f(1, "Aman", 3000);
	PartTimeEmployee p(2, "Kartik", 2500.14f);

	cout<<f.getName()<<" of EmployeeID "<<f.getID()<<" having Salary "<<f.getSalary()<<endl;
	cout<<p.getName()<<" of EmployeeID "<<p.getID()<<" having Wage "<<p.getWage()<<endl;


	return 0;

}