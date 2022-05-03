// display a message

#include <iostream>
using namespace std;

void bubblesort1A(int A[], int n);
int shift_operator_test(int n);

int main()
{
	//bubblesort
	int A[] = { 5, 2, 7, 4, 6, 3, 1 };
	bubblesort1A(A, 7);
	for (int i = 0; i < 7; i++) {
		cout << A[i] << endl;
	}

	// shift_operator
	int shift_res;
	shift_res = shift_operator_test(10);
	cout << "shift test: " << shift_res;
	return 0;
}


void bubblesort1A(int A[], int n) { //bubblesort（version : 1A）：0 <= n
	bool sorted = false;
	;	while (!sorted) {
		sorted = true;
		for (int i = 1; i < n; i++) {
			if (A[i - 1] > A[i]) {
				swap(A[i - 1], A[i]); //swap is contained in namespace std
				sorted = false;
			}
		}
		n--; // 至此末元素必然就位，故可以缩短待排序序列的有效长度
	}
} //借助bool型标志位sorted,可及时提前退出，而不至于总是蛮力地做n - 1躺扫描交换

int shift_operator_test(int n = 9) {
	int res;
	res = (n >> 1);
	return res;
}
