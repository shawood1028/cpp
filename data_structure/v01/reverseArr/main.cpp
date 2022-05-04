// 反转数组

#include <iostream>

using namespace std;

void reverse ( int* A, int lo, int hi );

int main () {
	int A[5] = { 3, 2, 4, 5, 1 };
	for ( int i = 0; i < 5; i++ ) {
		cout << A[i] << endl ;
	}
	reverse ( A, 0, 4);
	cout << endl;
	for ( int i = 0; i < 5; i++ ) {
		cout << A[i] << endl ;
	}
}

void reverse ( int* A, int lo, int hi ) {
	if ( lo < hi ) {
		swap ( A[lo], A[hi] );
		reverse ( A, lo + 1, hi - 1);
	}
}
