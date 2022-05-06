// hexoct1.cpp -- shows hex and octal literals

#include <iostream>

int main () {
	using namespace std;
	int chest = 42; // decimal integer literal
	int waist = 0x42; // hexadecimal integer literal
	int inseam = 042; // octal integer literal

	cout << "chest = " << chest << endl;
	cout << "waist = " << waist << endl;
	cout << "inseam = " << inseam << endl;
	return 0;
}
