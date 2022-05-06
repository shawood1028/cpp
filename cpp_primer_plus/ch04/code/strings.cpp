// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>

int main ()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];		// empty array
	char name2[Size] = "C++owboy";	//initialized array

	cout << name2 << endl;
	cin >> name1;
	cout << strlen(name1) << endl;
	cout << sizeof (name1) << endl;
	cout << "Your initial is " << name1[0] << endl;
	name2[3] = '\0';
	cout << "Here are the first 3 charactors of my name:" << endl;
	cout << name2 << endl;
	return 0;
}
