// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0 // makes ZERO symbol for 0 value
#include <climits>
int main()
{
	using namespace std;
	short sam = SHRT_MAX; //initialize a variable to max value
	unsigned short sue = sam; // okay if variable sam already defined

	cout << "Sam has " << sam << "dollars and Sue has " << sue << endl;
	cout << "Add $1 to each account." << endl;
	sam = sam + 1;
	sue = sue + 1;	
	cout << "Sam has " << sam << "dollars and Sue has " << sue << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << "dollars and Sue has " << sue << endl;
	sam = sam - 1;
	sue = sue - 1;	
	cout << "Sam has " << sam << "dollars and Sue has " << sue << endl;
	return 0;
}
