// arrayone.cpp -- small arrays of integers
#include <iostream>

int main ()
{
	using namespace std;
	int yams[3]; // creates array with three elements
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20,30,5}; // create, initialize array

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << sizeof yams << endl;
	cout << sizeof yams[0] << endl;
	return 0;
}

