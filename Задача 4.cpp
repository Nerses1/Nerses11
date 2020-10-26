#include "stdafx.h"
#include <iostream.h>
#include <math.h>
int main(){
	int x, y;
	double a = 345.345;
	double b, c;
	bool m;
	//cin >> a;
	c = modf(a, &b);
	while (c<b) {
		c *= 10;
	}
	m = (b - c>0);
	cout << b << endl << c << endl << m;
	getchar();
	return 0;
}