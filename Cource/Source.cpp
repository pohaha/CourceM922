#include <iostream>
#include "Huector.h"
#include "MyMath.h"
int main()
{
	
	Huector a;
	float b=10;
	a.add(b);
	std::cout << b << std::endl;
	Gauss(a);
	std::cin.get();
	return 0;
}