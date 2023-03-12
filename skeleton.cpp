#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

		cout << "---> Start writing code after #endif <---";
}


/*
#include<iostream>[library - i/p o/p]
or
#inclde<iostream.h>

using namespace std;[then ignore "std::"]
---
---
---

int main()[return]
{
	cin(console i/p)>>(insertion opertor)
	std::cout(console o/p)<<(insertion opertor)

	return 0;
}
*/
