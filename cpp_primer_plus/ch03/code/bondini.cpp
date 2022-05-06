// bondini.cpp -- using escape sequences
#include <iostream>
int main ()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:______\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "code is :" << code;
	return 0;
}
