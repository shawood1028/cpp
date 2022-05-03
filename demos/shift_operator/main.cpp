// shift operator test

#include <iostream>

using namespace std;

void shift_operator ( int n );

int main() {
	int n = 10;
	shift_operator ( n );
}

void shift_operator ( int n ) {
	cout << ( n >> 1 ) << endl ;
}
