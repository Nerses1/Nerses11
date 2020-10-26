#include "stdafx.h"
#include<iostream>

using namespace std;

int N;

int main()
{
	cout << "Input N" << endl;

	cin >> N;

	if (N % 2 == 0 && N>10)
	{
		cout << "4otnoe i dvuzna4noe" << endl;
	}
	else
	{
		cout << "ne 4otnoe ili ne dvuzna4noe" << endl;
	}

	system("pause");
	return 0;
}