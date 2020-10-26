#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int m;
	cout << "Введите трёхзначное число:" << endl;
	cin >> m;
	int a = m % 10;
	int b = m % 100 / 10;
	int c = m / 100;
	int y = a + b + c;
	if (m*m == y*y*y)
	{
		cout << "true ";
	}
	else
	{
		cout << " false";
	}
	cin.get();
	cin.get();
	return 0;
}