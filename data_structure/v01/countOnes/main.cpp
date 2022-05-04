// 统计整数二进制展开中数位1的总数 : O(logn)

#include <iostream>

using namespace std;

// 函数声明
int countOnes( unsigned int n );

int main () {
	int result = countOnes ( 441 );
	return 0;
}

int countOnes( unsigned int n ) {
	int ones = 0;
	while ( 0 < n ) {
		ones += ( 1 & n );
		cout << ones << endl;
		n >>= 1;
	}
	return ones;
}
