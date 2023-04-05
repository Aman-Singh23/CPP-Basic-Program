#include <iostream>
#include <fstream>
#include <map>
using namespace std;

#define MIN_BALANCE 500

class InsufficientFunds{};

class Account
{
private:
	long acountNumber;
	string firstName;
	string lastName;
	float balance;
	static long nextAccountNumber;

public:
	Account(){}

	Account(string fname, string lname, float balance)
	{
		nextAccountNumber++;
		accountNumber = nextAccountNumber;
		firstName = fname;
		lastName = lname;
		this->balance = balance;
	}

	long getAccNo()
	{
		return accountNumber;
	}

	string getFirstName()
	{
		return firstName;
	}

	string getLastName()
	{
		return lastName;
	}

	float getBalance()
	{
		return balance;
	}

	void deposit(float amount)
	{
		balance = balance + amount;
	}

	void withdraw(float amount)
	{
		if(balance-amount<MIN_BALANCE)
			throw InsufficientFunds();
		balance -= amount;
	}

	static void setLastAccountNumber(long accountNumber)
	{
		nextAccountNumber = accountNumber;
	}

	static long getLastAccountNumber()
	{
		return nextAccountNumber;
	}

	friend ofstream & operator<<(ofstream &ofs, Account &acc);
	friend ifstream & operator>>(ifstream &ifs, Account &acc);
	friend ostream & operator<<(ostream &os, Account &acc);
};

long Account::nextAccountNumber = 0;

ofstream & operator<<(ofstream &ofs, Account &acc)
{
	ofs<<acc.accountNumber<<endl;
	ofs<<acc.firstName<<endl;
	ofs<<acc.lastName<<endl;
	ofs<<acc.balance<<endl;
	return ofs;
}

ifstream & operator>>(ifstream &ifs, Account &acc)
{
	ifs>>acc.accountNumber;
	ifs>>acc.firstName;
	ifs>>acc.lastName;
	ifs>>acc.balance;
	return ifs;
}

ostream & operator<<(ostream &os, Account &acc)
{
	os<<"First Name: "<<acc.getFirstName()<<endl;
	os<<"Last NAme: "<<acc.getLastName()<<endl;
	os<<"Account Number: "<<acc.getAccNo()<<endl;
	os<<"Balance: "<<acc.getBalance()<<endl;
	return os;
}

class Bank
{
private:
	map<long, Account> accounts;
public:
	Bank()
	{
		Account account;
		ifstream infile;

		infile.open("Bank.data");
		if(!infile)
		{
			//cout<<"Error in Opening! File Not Found!!"<<endl;
			return;
		}
		while(!infile.eof())
			{
				infile>>account;
				accounts.insert(pair<long, Account>(account.getAccNo(), account));
			}

			Account::setLastAccountNumber(account.getAccNo());

			infile.close();
	}

	Account openAccount(string fname, string lname, float balance)
	{
		ofstream outfile;
		Account account(fname, lname, balance);
		accounts.insert(pair<long, Account>(account.getAccNo(),account))

		outfile.open("Bank.data", ios::trunc);

		map<long, Account>::iterator itr;
		for(itr = accounts.begin(); itr!=accounts.end(); itr++)
		{
			outfile<<itr->second;
		}
		outfile.close();
		return account;
	}

	Account balanceEnquiry(long accountNumber)
	{
		map<long, Account>::iterator itr=accounts.find(accountNumber);
		return itr->second;
	}

	Acoount deposit(long accountNumber, float amount)
	{
		map<long, Account>::iterator itr=accounts.find(accountNumber);
		itr->second.deposit(amount);
		return itr->second;
	}

	Account withdraw(long accountNumber, float amount)
	{
		map<long, Account>::iterator itr=accounts.find(accountNumber);
		itr->second.withdraw(amount);
		return itr->second;
	}

	void closeAccount(long accountNumber)
	{
		map<long, Account>::iterator itr=accounts.find(accountNumber);
		cout<<"Account Deleted: "<<itr->second;
		accounts.erase(accountNumber);
	}

	void showAllAccount()
	{
		map<long, Account>::iterator irt;
		for(itr = accounts.begin(); itr!=accounts.end();itr++)
		{
			cout<<"Account: "<<itr->first<<endl<<itr->second<<endl;
		}
	}

	~Bank()
	{
		ofstream outfile;
		outfile.open("Bank.data", ios::trunc);

		map<long, Account>::iterator irt;
		for(itr = accounts.begin(); itr!=accounts.end();itr++)
		{
			outfile<<itr->second;
		}
		outfile.close();
	}
};


int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	cout << "---> Start writing code after #endif <---";

	return 0;

}