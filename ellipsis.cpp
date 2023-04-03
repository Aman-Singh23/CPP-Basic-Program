#include <iostream>
#include <stdarg.h>
using namespace std;

int sum(int n, ...)
{
	va_list list;
	va_start(list, n);

	int sumx = 0;
	for(int i=0; i<n; i++)
	{
		int x = va_arg(list, int);
		sumx = sumx + x;
	}
	va_end(list);

	return sumx;
}

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	cout<<sum(3, 10, 20, 30);

	return 0;

}