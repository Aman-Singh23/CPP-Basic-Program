#include <iostream>
using namespace std;

template <class T>
T maxim(T x, T y)
{
	return x>y?x:y;
}

// int max(int x, int y)
// {
// 	return x>y?x:y;
// }

// float max(float x, float y)
// {
// 	return x>y?x:y;
// }

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	cout<<maxim(12, 14)<<endl; // integer
	cout<<maxim(2.3, 1.4)<<endl; // double
	cout<<maxim(2.3f, 5.6f)<<endl; // float
	// cout<<maxim(2.3f, 5.5)<<endl; // error will error
	
	return 0;

}