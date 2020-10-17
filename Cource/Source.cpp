#include <iostream>
#include "Huector.h"
#include "MyMath.h"
int main()
{
	//simple tests for ensuring everything works great
	Vector<float> TestArray;
	std::cout << "created <TestArray> object of class Array" << std::endl;
	float b=10,c=22;
	printf("\n");

	//testing for adding the elements
	TestArray.add(b);
	std::cout << "added: " << b << std::endl;
	printf("\n");

	TestArray.show();
	printf("\n");
	TestArray.add(c);
	std::cout << "added: " << c << std::endl;
	printf("\n");
	TestArray.show();
	printf("\n");

	//gauss testing
	Gauss(TestArray);


	//iterrations testing


	return 0;
}