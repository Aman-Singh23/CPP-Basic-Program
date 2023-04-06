#include <iostream>
#include <fstream>
#include <map>
using namespace std;

#define MIN_BALANCE 500

class InsufficientFunds{};

class Account
{
private:
	long accountNumber;
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
		accounts.insert(pair<long, Account>(account.getAccNo(),account));

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

	Account deposit(long accountNumber, float amount)
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
		map<long, Account>::iterator itr;
		for(itr = accounts.begin(); itr!=accounts.end();itr++)
		{
			cout<<"Account: "<<itr->first<<endl<<itr->second<<endl;
		}
	}

	~Bank()
	{
		ofstream outfile;
		outfile.open("Bank.data", ios::trunc);

		map<long, Account>::iterator itr;
		for(itr = accounts.begin(); itr!=accounts.end();itr++)
		{
			outfile<<itr->second;
		}
		outfile.close();
	}
};


int main() {
	// #ifndef CP
	// 	// for getting input from input.txt
	// 	freopen("input.txt", "r", stdin);
	// 	// for getting input from input.txt
	// 	freopen("output.txt", "w", stdout);
	// #endif

	Bank b;
	Account acc;

	int choice;
	string fname, lname;
	long accountNumber;
	float balance;
	float amount;

	cout<<"***Banking System***"<<endl;

	do
	{
		cout<<"\n\n\tSelect one option below ";
		cout<<"\n\t1 Open an Account";
		cout<<"\n\t2 Balance Enquiry";
		cout<<"\n\t3 Deposit";
		cout<<"\n\t4 Withdrawal";
		cout<<"\n\t5 Close an Account";
		cout<<"\n\t6 Show All Account";
		cout<<"\n\t7 Quit"<<endl;
		
		cin>>choice;

		switch (choice)
		{
		case 1:
			cout<<"Enter First Name: ";
			cin>>fname;
			cout<<"Enter Last Name: ";
			cin>>lname;
			cout<<"Enter intial Balance: ";
			cin>>balance;
			acc = b.openAccount(fname, lname, balance);
			cout<<"\nCongrats... Account is Created"<<endl;
			cout<<acc;
			break;

		case 2:
			cout<<"Enter Account Number: ";
			cin>>accountNumber;
			acc = b.balanceEnquiry(accountNumber);
			cout<<endl<<"Your Account Details"<<endl;
			cout<<acc;
			break;
		
		case 3:
			cout<<"Enter Account Number: ";
			cin>>accountNumber;
			cout<<"Enter Balance: ";
			cin>>amount;
			acc = b.deposit(accountNumber, amount);
			cout<<endl<<"Amount is Deposited"<<endl;
			cout<<acc;
			break;

		case 4:
			cout<<"Enter Account Number: ";
			cin>>accountNumber;
			cout<<"Enter Balance: ";
			cin>>amount;
			acc = b.withdraw(accountNumber, amount);
			cout<<endl<<"Amount Withdrawn"<<endl;
			cout<<acc;
			break;

		case 5:
			cout<<"Enter Account Number: ";
			cin>>accountNumber;
			b.closeAccount(accountNumber);
			cout<<endl<<"Amount is Closed"<<endl;
			cout<<acc;
			break;
		
		case 6:
			b.showAllAccount();
			break;
		
		case 7:
			break;
		
		default:
			cout<<"\nEnter Correct Choice";
			exit(0);
		}
	} while (choice != 7);
	
	return 0;
}