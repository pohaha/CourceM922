#include <iostream>
#include "Huector.h"
#include "MyMath.h"
int main()
{
	
	Huector<float> a;
	float b=10,c=22;

	a.add(c);
	a.show();
	a.add(b);
	std::cout <<"added: "<< b << std::endl;
	Gauss(a);
	a.show();

	std::cin.get();
	return 0;
}