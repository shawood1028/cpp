// limits.cpp -- some integer limits
#include <iostream>
#include <climits>

int main() {
	using namespace std;
	int n_int = INT_MAX; // initialize n_int to max int value
	int l_int = INT_MIN;
	short n_short = SHRT_MAX; // symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// sizeof operator yields size of type or of variable
	cout << "int is " << sizeof (int) << " bytes." << endl;
	cout << "int: " << n_int << endl;
	cout << "int: " << l_int << endl;
	return 0;
} 
