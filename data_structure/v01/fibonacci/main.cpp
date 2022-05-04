// fibonacci 

#include <iostream>

using std::cout;
using std::endl;

long long fib1 ( int n );
long long fib2 ( int n ,long long prev );

int main () {
	long long prev;
	for ( int i = 0; i < 40 ; i++ ) {
		int res1;
		res1 = fib1 ( i );
		cout << "fib1: " << i << "th:  " << res1 << endl;
		int res2;
		res2 = fib2 ( i , prev );
		cout << "fib2: " << i << "th: " << res2 << endl;
	}
}

long long fib1 ( int n ) { // 计算Fibonacci数列的第n项（二分递归版）：(O(2^n))
	return ( 2 > n ) ? 
			( long long ) n  // 若到达递归基直接取值
			: fib1 ( n - 1 ) + fib1 ( n - 2 ); // 否则, 递归计算前两项，其和即为正解。
}

long long fib2 ( int n , long long& prev ) { // 线性递归版
	if ( 0 == n ) {
		 prev = 1; return 0; // 直接取值: fib(-1) = 1, fib (0) = 0
	}
	else { // 否则
		long long prevPrev;
	   	prev = fib2 ( n - 1, prevPrev ); // 递归计算前两项
		return prevPrev + prev; // 其和即为正解
	}
}
