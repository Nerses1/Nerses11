#include "stdafx.h"
#include <iomanip>
#include <iostream>

constexpr bool Check(const int x)
{
	return x / 1000 == x % 10 && x / 100 % 10 == x / 10 % 10;
}

int main()
{
	std::cout << std::boolalpha << Check(1221) << std::endl;
}