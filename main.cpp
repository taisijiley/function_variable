#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*�������, �������� ���������� (����������)*/

int foo(int a)
{
	return ++a;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int value = 1;

	value = foo(value);

	cout << value << endl;
}