#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	float totalAmount, billAmount;

	cout<<"Enter billAmount"<<endl;
	cin>>billAmount;

	if(billAmount<100)
	{
		totalAmount = billAmount;
	}
	else if(billAmount>=100 && billAmount<=500)
	{
		totalAmount = billAmount - billAmount*10/100;
	}
	else
	{
		totalAmount = billAmount - billAmount*20/100;
	}

	cout<<"totalAmount is: "<<totalAmount;


	return 0;

}



// int main()
// {
//  float billAmount;
//  float discount=0.0;
 
//  cout<<"Enter Bill Amount:";
//  cin>>billAmount;
//  if(billAmount>=500)
//  discount=billAmount*20/100;
//  else if(billAmount>=100 && billAmount<500)
//  discount=billAmount*10/100;
 
//  cout<<"Bill Amount is:"<<billAmount<<endl;
//  cout<<"Discount is :"<<discount<<endl;
//  cout<<"Discounted Amount is:"<<billAmount-discount<<endl;
 
 
// }