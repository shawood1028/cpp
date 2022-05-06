// morechar.cpp -- the char type and int type contrasted
#include <iostream>

int main ()
{
	using namespace std;
	char ch = 'M'; // assign ASCII code for M to ch
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "Add one" << endl;
	ch = ch + 1; // change charactor code in ch
	i = ch; // save new charactor code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// using the cout.put() member function to display a char
	cout << "Display char ch using cout.put(ch): ";
	cout.put(ch);

	// using cout.put() to display a char constant
	cout.put('!');

	cout << endl << "Done" << endl;
	return 0;
}
