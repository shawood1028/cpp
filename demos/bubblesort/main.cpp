// bubblesort
#include <iostream>
using namespace std;
// 函数声明
void bubblesort1A ( int A[], int n );

int main() {
	int A[] = {5, 2, 7, 4, 6, 3, 1};
	int n = 7;
	bubblesort1A ( A, n );
	for ( int  i = 0; i < n; i++ ){
		cout << A[i] << endl;
	}
	return 0;
}

void bubblesort1A ( int A[], int n ) {
	bool sorted = false;
	while ( !sorted ) {
		sorted = true;			
		for ( int i = 1; i < n; i++ ) {
			if ( A[i-1] > A[i] ) {
			swap ( A[i-1], A[i] );
			sorted = false;
			}
		}
		n--;
	}
}
